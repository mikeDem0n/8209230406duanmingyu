#include <iostream>
int main() {
    char in;
    std::cout << "������һ���ַ�: ";
    std::cin >> in;

    if (in >= 'a' && in <= 'z') {
        char out = in - 'a' + 'A';
        std::cout << "��д�ַ�: " << out << std::endl;
    }
    else {
        int Ascii = static_cast<int>(in) + 1;
        std::cout << "����ַ���ASCII��ֵ: " << Ascii << std::endl;
    }
    return 0;
}
