#include <fstream>
#include <string>
#include <iostream>

int FIXNUM_SHIFT = 2; // 2 bits at the end are for tagging

std::string compile_program(int x) {
    std::string res = "mov w0, #" + std::to_string(x) + "\nret\n";
    std::cout << res << std::endl;
    return res;

}

// void immediate_rep(int x) {
    

// }


int main() {
    std::string asm_code = compile_program(31415); // generate assembly code in a file
    std::ofstream output_stream("compile_program.s");
    output_stream << ".globl _compile_program\n"
        << "_compile_program:\n"
        << asm_code;
    
}