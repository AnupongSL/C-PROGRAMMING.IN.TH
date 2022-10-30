#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[50];
    int a, i, b = 1, c = 0, d = 0;
    scanf("%s", &s);
    a = strlen(s);
    for (i = 0; i < a; i++)
    {
        if (s[i] == 'A')
        {
            swap(b, c);
        }
        else if (s[i] == 'B')
        {
            swap(c, d);
        }
        else if (s[i] == 'C')
        {
            swap(d, b);
        }
    }
    if (b == 1)
    {
        cout << "1";
    }
    else if (c == 1)
    {
        cout << "2";
    }
    else if (d == 1)
    {
        cout << "3";
    }
    return 0;
}
