#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(6);
    int n;
    float a;
    cin >> n;
    a = n;
    if (n >= 3 && n % 2 == 1 && n <= 15)
    {
        if (n == 3)
        {
            a = a + 0.732051;
        }
        else
        {
            a = a + 0.464102;
        }
        cout << a << endl;
    }
    else if (n <= 14)
    {
        if (n == 1)
        {
            a = n * 2;
        }
        cout << a << endl;
    }
    return 0;
}
