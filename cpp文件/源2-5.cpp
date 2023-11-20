#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string line;
    std::cout << "������һ���ַ�: ";
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

    std::cout << "Ӣ����ĸ����: " << alphabets << std::endl;
    std::cout << "�ո����: " << spaces << std::endl;
    std::cout << "�����ַ�����: " << digits << std::endl;
    std::cout << "�����ַ�����: " << others << std::endl;

    return 0;
}

