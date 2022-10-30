#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, i, x, v;
    cin >> a >> b;
    if (a < b)
    {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    x = b;
    for (i = 0; i < 1;)
    {
        c = a % x;
        d = b % x;
        v = c + d;
        if (v == 0)
        {
            cout << x << endl;
            i++;
        }
        x = x - 1;
    }
    return 0;
}