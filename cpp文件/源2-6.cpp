#include <iostream>
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}


int lcm(int a, int b) {
    return a / gcd(a, b) * b; 
}

int main() {
    int a, b;

    std::cout << "����������������: ";
    std::cin >> a >> b;

    int gcdresult = gcd(a, b);
    int lcmresult = lcm(a, b);

    std::cout << "���Լ����: " << gcdresult << std::endl;
    std::cout << "��С��������: " << lcmresult << std::endl;

    return 0;
}
