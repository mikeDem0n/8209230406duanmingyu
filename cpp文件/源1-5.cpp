#include <iostream>
#include <iomanip>

int main() {
    double fahrenheit;
    double celsius;
    std::cout << "�����뻪���¶�: ";
    std::cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "�����¶�Ϊ: " << celsius << " ��C" << std::endl;
    return 0;
}
