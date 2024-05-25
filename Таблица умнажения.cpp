#include <iostream>

using namespace std;

int main() {
    int number;
    setlocale(LC_ALL, "Russian");
    cout << "Введите число от 1 до 10: ";
    cin >> number;

    while (number < 1 || number > 10) {
        cout << "Некорректный ввод. Пожалуйста, введите число от 1 до 10.\n";
        cout << "Введите число от 1 до 10: ";
        cin >> number;
    }

    cout << "Таблица умножения для " << number << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
