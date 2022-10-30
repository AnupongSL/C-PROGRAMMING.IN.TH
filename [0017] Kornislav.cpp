#include <iostream>
using namespace std;
int main()
{
    int A, B, C, D, i;
    cin >> A >> B >> C >> D;
    for (i = 0; i < 3; i++)
    {
        if (A < B)
        {
            A ^= B;
            B ^= A;
            A ^= B;
        }
        else if (A < C)
        {
            A ^= C;
            C ^= A;
            A ^= C;
        }
        else if (A < D)
        {
            A ^= D;
            D ^= A;
            A ^= D;
        }
    }
    for (i = 0; i < 2; i++)
    {
        if (B > C)
        {
            B ^= C;
            C ^= B;
            B ^= C;
        }
        else if (B > D)
        {
            B ^= D;
            D ^= B;
            B ^= D;
        }
    }
    if (C < D)
    {
        C ^= D;
        D ^= C;
        C ^= D;
    }
    cout << B * C << endl;
    return 0;
}