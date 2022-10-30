#include <iostream>
using namespace std;
int main()
{
    int n, i, a[1000], b = 0, c = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < a[0])
        {
            a[0] = a[i];
            b = a[0];
        }
    }
    c = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > b)
        {
            b = a[i];
        }
    }
    cout << c << endl;
    cout << b << endl;
    return 0;
}