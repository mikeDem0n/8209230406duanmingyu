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
    std::cout << "�����������ε������߳���" << std::endl;
    std::cin >> a >> b >> c;
    if (A(a, b, c)) {
        double sum = a + b + c;
        std::cout << "�����ε��ܳ�Ϊ��" << sum << std::endl;
        if (B(a, b, c)) {
            std::cout << "���������ǵ��������Ρ�" << std::endl;
        }
        else {
            std::cout << "�������β��ǵ��������Ρ�" << std::endl;
        }
    }
    else {
        std::cout << "���������޷����������Ρ�" << std::endl;
    }

    return 0;
}

