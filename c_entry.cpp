#include <fstream>
#include <string>
#include <iostream>

std::string c_entry(int x) {
    std::string res = "mov w0, #" + std::to_string(x) + "\nret\n";
    std::cout << res << std::endl;
    return res;

}


int main() {
    std::string asm_code = c_entry(31415); // generate assembly code in a file
    std::ofstream output_stream("c_entry.s");
    output_stream << ".globl _c_entry\n"
        << "_c_entry:\n"
        << asm_code;
    
}