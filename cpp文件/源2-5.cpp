#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string line;
    std::cout << "请输入一行字符: ";
    std::getline(std::cin, line); 

    int alphabets = 0, spaces = 0, digits = 0, others = 0;

    for (char ch : line) {
        if (std::isalpha(static_cast<unsigned char>(ch))) {
            ++alphabets;
        }
        else if (std::isspace(static_cast<unsigned char>(ch))) {
            ++spaces;
        }
        else if (std::isdigit(static_cast<unsigned char>(ch))) {
            ++digits;
        }
        else {
            ++others; 
        }
    }

    std::cout << "英文字母个数: " << alphabets << std::endl;
    std::cout << "空格个数: " << spaces << std::endl;
    std::cout << "数字字符个数: " << digits << std::endl;
    std::cout << "其他字符个数: " << others << std::endl;

    return 0;
}

