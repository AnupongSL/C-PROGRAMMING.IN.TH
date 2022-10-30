#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846
using namespace std;
int main()
{
    int r;
    double a, b;
    cin >> r;
    a = 2 * r * r;
    b = PI * r * r;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(6);
    cout << b << endl;
    cout << a << endl;
    return 0;
}