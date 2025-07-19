#include <fstream>
#include <string>
#include <iostream>


std::string compile_program(int x) {
    std::string res = "mov w0, #" + std::to_string(x) + "\nret\n";
    std::cout << res << std::endl;
    return res;

}

std::string compile_program(char x) {
    std::string res = "mov w0, #";
    res.push_back('\'');
    res.push_back(x);
    res.push_back('\'');
    res += "\nret\n";
    std::cout << res << std::endl;
    return res;
}

std::string compile_program(bool x) {
    std::string res = "mov w0, #" + std::to_string(static_cast<int>(x)) + "\nret\n";
    std::cout << res << std::endl;
    return res;
}

std::string compile_program(const int* arr, size_t size) {
    if (size == 0) return "/* empty array — no code generated */\n";

    return "";
}



int main() {
    // std::string asm_code = compile_program(31415); // generate assembly code in a file
    std::string asm_code = compile_program(99);
    std::ofstream output_stream("c_entry.s");
    output_stream << ".globl _c_entry\n"
        << "_c_entry:\n"
        << asm_code;
    
}