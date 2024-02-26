#include <iostream>
#include <omp.h>
#include <vector>
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <fstream>
#include <chrono>

std::vector<int> read_file() {
    std::fstream fs("../datos.txt", std::ios::in );
    std::string line; std::vector<int> ret;
    while( std::getline(fs, line) ){
        ret.push_back( std::stoi(line) );
    }
    fs.close();
    return ret;
}

//Serial
std::vector<int> tablitadefrecuencias(const int* datos,const int tam){
    std::vector<int> resultados(100);
    int contador=0;
    for(int i=0;i<101;i++){
        for(int j=0;j<tam;j++){
            if(i==datos[j]){
                contador+=1;
            }
        }
        resultados[i]=contador;
        contador=0;
    }
    return resultados;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::vector<int> datos=read_file();
    for(int i =0; i<10;i++){
        fmt::println("{}",datos[i]);
    }

    //Tabla de frecuencias
    std::vector<int> vectorserial=tablitadefrecuencias(datos.data(),datos.size());

    for(int i =0; i<=100;i++){
        fmt::println("{} {}",i,vectorserial[i]);
    }

    return 0;
}
