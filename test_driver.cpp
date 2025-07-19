#include <iostream>
#include <cstdio>
#include <string>

extern "C" int compile_program();


using namespace std;
int main(int argc, char** argv) {
    std::cout << compile_program() << std::endl;

    return 0;   
}
