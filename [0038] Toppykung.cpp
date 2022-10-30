#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    string str[1000];
    int i, n, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (str[j] > str[i])
                {
                    str[j].swap(str[i]);
                }
            }
        }
    }
    str[n + 1] = "0";
    for (i = 0; i < n; i++)
    {
        if (str[i] > str[n + 1])
        {
            cout << str[i] << endl;
            str[n + 1] = str[i];
        }
    }
    return 0;
}