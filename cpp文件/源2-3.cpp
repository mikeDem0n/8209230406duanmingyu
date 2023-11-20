#include <iostream>
#include <cmath>

bool A(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

bool B(double a, double b, double c) {
    return (a == b) || (a == c) || (b == c);
}

int main() {
    double a, b, c;
    std::cout << "请输入三角形的三条边长：" << std::endl;
    std::cin >> a >> b >> c;
    if (A(a, b, c)) {
        double sum = a + b + c;
        std::cout << "三角形的周长为：" << sum << std::endl;
        if (B(a, b, c)) {
            std::cout << "该三角形是等腰三角形。" << std::endl;
        }
        else {
            std::cout << "该三角形不是等腰三角形。" << std::endl;
        }
    }
    else {
        std::cout << "这三条边无法构成三角形。" << std::endl;
    }

    return 0;
}

