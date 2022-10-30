#include <stdio.h>
main()
{
    int i, j, m[42] = {0}, count = 0, num[10], k = 0, t;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 10; i++)
    {
        m[k] = num[i] % 42;
        k++;
    }
    for (j = 0; j < k; j++)
    {
        for (t = j + 1; t < k; t++)
        {
            if (m[j] == m[t])
            {
                count++;
                break;
            }
        }
    }
    int g;
    g = 10 - count;
    printf("%d", g);
}