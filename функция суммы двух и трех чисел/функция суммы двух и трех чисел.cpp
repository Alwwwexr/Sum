#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите третье число: ";
    cin >> c;
    cout << "Сумма трех чисел: " << a + b + c;
    cout << "Произведение трех чисел: " << a * b * c;
    return 0;
}