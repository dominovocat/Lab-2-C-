#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Завдання 1. Integer30.
    // Дано номер року. Визначити номер століття.
    cout << "Integer30" << endl;

    // декларації
    int year, century;

    // введення
    cout << "year = ";
    cin >> year;

    // підрахунок
    century = (year + 99) / 100;

    // виведення
    cout << "Century = " << century << endl;


    // Завдання 2. Boolean23.
    // Перевірити, чи читається чотиризначне число
    // однаково зліва направо і справа наліво.
    cout << "Boolean23" << endl;

    // декларації
    int number;
    int a, b, c, d;
    bool R;

    // введення
    cout << "number = ";
    cin >> number;

    // підрахунок
    a = number / 1000;        // цифра тисяч
    b = (number / 100) % 10;  // цифра сотень
    c = (number / 10) % 10;   // цифра десятків
    d = number % 10;          // цифра одиниць

    R = (a == d) && (b == c);

    // виведення
    cout << boolalpha;
    cout << "R = " << R << endl;


    // Завдання 3. Math34.
    // Обчислити математичний вираз №34.
    cout << "Math34" << endl;

    // декларації
    const double pi = 3.141592653589793;
    double x, y;
    double numerator, denominator;
    double angle37;

    // введення
    cout << "x = ";
    cin >> x;

    // переведення кута 37 градусів у радіани
    angle37 = 37.0 * pi / 180.0;

    // підрахунок чисельника
    numerator = 3.0 * pi
              * pow(sin(pi + 2.0 * x), 3.0)
              * cbrt(fabs(x - 0.5 * exp(x)));

    // підрахунок знаменника
    denominator = pow(3.0, x - 5.0)
                * log(sin(angle37));

    // підрахунок
    y = numerator / denominator;

    // виведення
    cout << "y = " << y << endl;

    cout << "...";
    cin.get();
    cin.get();

    return 0;
}