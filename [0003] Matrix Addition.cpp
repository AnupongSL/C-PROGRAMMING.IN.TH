#include <iostream>
using namespace std;
int main()
{
    int a, b, i, j;
    cin >> a >> b;
    int m[a][b], n[a][b];
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            cin >> m[i][j];
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            cin >> n[i][j];
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            cout << m[i][j] + n[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}