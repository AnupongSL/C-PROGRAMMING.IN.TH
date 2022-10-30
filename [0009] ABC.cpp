#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int box[3], i;
    char str[100];
    cin >> box[0] >> box[1] >> box[2];
    cin >> str;
    for (i = 0; i < 3; i++)
    {
        if (box[0] > box[1])
        {
            box[0] ^= box[1];
            box[1] ^= box[0];
            box[0] ^= box[1];
        }
        else if (box[0] > box[2])
        {
            box[0] ^= box[2];
            box[2] ^= box[0];
            box[0] ^= box[2];
        }
        else if (box[1] > box[2])
        {
            box[1] ^= box[2];
            box[2] ^= box[1];
            box[1] ^= box[2];
        }
    }
    for (i = 0; i < 3; i++)
    {
        if (str[i] == 'A')
        {
            cout << box[0] << " ";
        }
        else if (str[i] == 'B')
        {
            cout << box[1] << " ";
        }
        else if (str[i] == 'C')
        {
            cout << box[2] << " ";
        }
    }
    return 0;
}