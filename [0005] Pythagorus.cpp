#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b;
    c = sqrt((a * a) + (b * b));
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(6);
    cout << c << endl;
    return 0;
}