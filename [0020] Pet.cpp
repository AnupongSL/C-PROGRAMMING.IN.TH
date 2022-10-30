#include <iostream>
using namespace std;
int main()
{
    int a[10], b[10], c[10], d[10], sum[10], temp, n = 1;
    for (int i = 1; i < 6; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        sum[i] = a[i] + b[i] + c[i] + d[i];
    }
    temp = 0;
    for (int i = 1; i < 6; i++)
    {
        if (sum[i] > temp)
        {
            temp = sum[i];
            n = i;
        }
    }
    cout << n << " " << temp << endl;
    return 0;
}
