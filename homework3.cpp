#include <iostream>
#include <string>

using namespace std;

// задание 4 (1)

extern const int a;
extern const int b;
extern const int c;
extern const int d;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x = a * (b + (c / d));
    cout << "целочисленное выражение: " << x << endl;

    float y = a * (b + static_cast <float> (c) / d);
    cout << "выражение с плавающей точкой: " << y << endl;

    float z = static_cast <float> (c) / d;
    cout << "выражение c/d: " << z << endl;

    return 0;
}

// задание 2

int main1()
{
    int ba, bb;
    cout << "enter the variable ba: ";
    cin >> ba;

    bb = (ba <= 21) ? ba : -ba;
    cout << (21 - ba) << endl;

    bb = (ba > 21) ? ba : -ba;
    cout << (21 - ba) * 2 << endl;

    return 0;
}

// задание 3

int main2() {

    int arr[3][3][3] = { { { 0, 1, 2 }, { 3, 4, 5 }, { 6, 7, 8 } },
                       { { 9, 10, 11}, {12, 13, 14 }, { 15, 16, 17 } },
                       { { 18, 19, 20 }, { 21, 22, 23 }, { 24, 25, 26 } } }, *pArr;

     
    pArr = &arr[1][1][1];

    cout << *pArr << endl;

    return 0;
}
