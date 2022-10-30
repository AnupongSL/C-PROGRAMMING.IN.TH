#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i, j = 0;
    string str, str1;
    getline(cin, str);
    for (i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a')
        {
            if (str[i + 1] == 'p')
            {
                if (str[i + 2] == 'a')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'e')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'i')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'o')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'u')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
            }
        }
        else if (str[i] == 'e')
        {
            if (str[i + 1] == 'p')
            {
                if (str[i + 2] == 'a')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'e')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'i')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'o')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'u')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
            }
        }
        else if (str[i] == 'i')
        {
            if (str[i + 1] == 'p')
            {
                if (str[i + 2] == 'a')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'e')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'i')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'o')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'u')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
            }
        }
        else if (str[i] == 'o')
        {
            if (str[i + 1] == 'p')
            {
                if (str[i + 2] == 'a')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'e')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'i')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'o')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'u')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
            }
        }
        else if (str[i] == 'u')
        {
            if (str[i + 1] == 'p')
            {
                if (str[i + 2] == 'a')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'e')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'i')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'o')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
                else if (str[i + 2] == 'u')
                {
                    str[i + 1] = 0;
                    str[i + 2] = 0;
                }
            }
        }
    }
    j = 0;
    for (i = 0; i < str.length(); i++)
    {
        if (str[i] != 0)
        {
            j++;
            str1 += str[i];
        }
    }
    cout << str1 << endl;
    return 0;
}