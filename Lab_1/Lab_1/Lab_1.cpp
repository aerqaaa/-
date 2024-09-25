#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "rus");
    float x = 1 , y = 1;
    while (x != 0 || y != 0) {
        cout << "Введите координату Х:";
        cin >> x;
        cout << "Введите координату Y:";
        cin >> y;
        if ((y >= 0) && (x <= 3) && (x >= 0) && (y <= 5))
        {
            if (y <= 4 - (4.0 / 3.0) * x && x >= 0 && y >= 0)
            {
                cout << "Точка с заданными координатами (" << x << " ; " << y << " ) входит в треугольник" << endl;
            }
            else
            {
                cout << "Точка с заданными координатами (" << x << " ; " << y << " ) не входит в треугольник" << endl;
            }
        }
        else
        {
            cout << "Точка с заданными координатами (" << x << " ; " << y << " ) не входит в треугольник" << endl;
        }
    }
}
     
