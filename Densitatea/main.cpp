#include <iostream>

using namespace std;

int main()
{
    float a[2] , b[2] , c[2];
    // [0]pentru masa, [1] pnetru volum [2] pnetru densitate
    cout << "Introduce masa lichidului: "; cin >> a[0];
    cout << "Introduce masa monedei: "; cin >> b[0];
    cout << "Introduce masa finala: "; cin >> c[0];
    a[2] = 0.997;
    a[1] = a[0] / a[2];
    b[1] = (a[0] + b[0]) - c[0];
    b[2] = b[0] / b[1];
    cout << "Desnitatea monedei este: " << b[2];
}
