#include <iostream>
#include<iostream>
#include<clocale>
#include<cmath>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    float CheckX = 1, CheckY = 1;
    while (CheckX != 0 || CheckY != 0) {
        cout << "Введите координату X: " << endl;
        cin >> CheckX;
        cout << "Введите координату Y: " << endl;
        cin >> CheckY;
        if (CheckX <= 3 && CheckX >= 0)
        {
            float PredictedY = 0;
            PredictedY = -4.0 / 3 * CheckX + 4;
            if ((CheckY <= PredictedY) && (CheckY >= 0))
            {
                cout << "Точка входит в треугольник" << endl;
            }
            else
            {
                cout << "Точка не входит в треугольник" << endl;
            }
        }
        else
        {
            cout << "Точка не входит в треугольник" << endl;
        }
    }
}
// проверка изменений
