#include <iostream>
#include <iomanip>

int main() {
    double fahrenheit;
    double celsius;
    std::cout << "ÇëÊäÈë»ªÊÏÎÂ¶È: ";
    std::cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "ÉãÊÏÎÂ¶ÈÎª: " << celsius << " ¡ãC" << std::endl;
    return 0;
}
