#include <iostream>
#include <cstdio>
#include <string>

extern "C" int c_entry();

using namespace std;
int main(int argc, char** argv) {
    std::cout << c_entry() << std::endl;

    return 0;   
}
