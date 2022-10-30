#include <iostream>
using namespace std;
int main()
{
    int A, B, C, sum, sum1;
    cin >> A >> B >> C;
    sum = (C - B) - 1;
    sum1 = (B - A) - 1;
    if (sum >= sum1)
    {
        cout << sum << endl;
    }
    else if (sum1 > sum)
    {
        cout << sum1 << endl;
    }
    return 0;
}