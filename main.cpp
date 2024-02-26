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

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::vector<int> datos=read_file();
    for(int i =0; i<10;i++){
        fmt::println("{}",datos[i]);
    }


    return 0;
}
