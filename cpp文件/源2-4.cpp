#include <iostream>
using namespace std;
int main() {
    double a, b;
    char operation;
    cout << "�����һ������: ";
    cin >> a;
    cout << "����ڶ�������: ";
    cin >> b;
    cout << "��������� (+, -, *, /, %): ";
    cin >> operation;

    switch (operation) {
    case '+':
        cout << "�����: " << a + b << endl;
        break;
    case '-':
        cout << "�����: " << a - b << endl;
        break;
    case '*':
        cout << "�����: " << a * b << endl;
        break;
    case '/':
        if (b != 0) {
            cout << "�����: " << a / b << endl;
        }
        else {
            cout << "��������Ϊ0" << endl;
        }
        break;
    case '%':
        if (static_cast<int>(b) != 0) {
            cout << "����ǣ�" << static_cast<int>(a) % static_cast<int>(b) << endl;
        }
        else {
            cout << "��������Ϊ0" << endl;
        }
        break;
    default:
        cout << "��Ч����" << endl;
    }

    return 0;
}
