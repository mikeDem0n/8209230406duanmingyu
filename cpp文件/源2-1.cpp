#include <iostream>
int main() {
    char in;
    std::cout << "ÇëÊäÈëÒ»¸ö×Ö·û: ";
    std::cin >> in;

    if (in >= 'a' && in <= 'z') {
        char out = in - 'a' + 'A';
        std::cout << "´óĞ´×Ö·û: " << out << std::endl;
    }
    else {
        int Ascii = static_cast<int>(in) + 1;
        std::cout << "ºó¼Ì×Ö·ûµÄASCIIÂëÖµ: " << Ascii << std::endl;
    }
    return 0;
}
