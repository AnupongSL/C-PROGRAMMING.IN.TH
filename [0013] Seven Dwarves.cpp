#include <iostream>
using namespace std;
int main()
{
    int a[100], i, j, b[4], k = 0, sum = 0, n = 0, m = 0, c = 0;
    for (i = 0; i < 9; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    n = sum - 100;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (i != j)
            {
                if (a[i] + a[j] == n)
                {
                    m = a[i];
                    c = n - a[i];
                    break;
                }
            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        if (a[i] != m && a[i] != c)
        {
            cout << a[i] << endl;
        }
    }
    return 0;
}