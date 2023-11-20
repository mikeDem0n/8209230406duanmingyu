#include <iostream>
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}


int lcm(int a, int b) {
    return a / gcd(a, b) * b; 
}

int main() {
    int a, b;

    std::cout << "请输入两个正整数: ";
    std::cin >> a >> b;

    int gcdresult = gcd(a, b);
    int lcmresult = lcm(a, b);

    std::cout << "最大公约数是: " << gcdresult << std::endl;
    std::cout << "最小公倍数是: " << lcmresult << std::endl;

    return 0;
}
