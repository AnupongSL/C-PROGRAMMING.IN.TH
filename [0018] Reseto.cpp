#include <iostream>
using namespace std;
int main()
{
    int a[1000], b[1000], n, i, j, k = 2, m;
    cin >> n >> m;
    int c[n];
    for (i = 2; i <= n; i++)
    {
        a[i] = i;
    }
    for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= n; j++)
        {
            if (a[j] % i == 0)
            {
                if (a[j] != b[j])
                {
                    b[j] = a[j];
                    c[k] = b[j];
                    k++;
                }
            }
        }
    }
    cout << c[m + 1] << endl;
    return 0;
}
