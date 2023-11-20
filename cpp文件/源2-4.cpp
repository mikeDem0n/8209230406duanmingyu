#include <iostream>
using namespace std;
int main() {
    double a, b;
    char operation;
    cout << "输入第一个数字: ";
    cin >> a;
    cout << "输入第二个数字: ";
    cin >> b;
    cout << "输入运算符 (+, -, *, /, %): ";
    cin >> operation;

    switch (operation) {
    case '+':
        cout << "结果是: " << a + b << endl;
        break;
    case '-':
        cout << "结果是: " << a - b << endl;
        break;
    case '*':
        cout << "结果是: " << a * b << endl;
        break;
    case '/':
        if (b != 0) {
            cout << "结果是: " << a / b << endl;
        }
        else {
            cout << "除数不能为0" << endl;
        }
        break;
    case '%':
        if (static_cast<int>(b) != 0) {
            cout << "结果是：" << static_cast<int>(a) % static_cast<int>(b) << endl;
        }
        else {
            cout << "除数不能为0" << endl;
        }
        break;
    default:
        cout << "无效操作" << endl;
    }

    return 0;
}
