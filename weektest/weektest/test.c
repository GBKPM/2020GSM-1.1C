#include <stdio.h>
#include <stdlib.h>

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, i;

    scanf_s("%d", &n);

    double t;
    char q1, q2;

    for (i = 0; i < n; i++)
    {
        scanf_s("%lf", &t);
        while (getchar() != '\n')
            ;
        q1 = getchar();
        while (getchar() != '\n')
            ;
        q2 = getchar();
        if (t > 37.00 || q1 == 'Y' || q2 == 'Y')
        {
            printf("등교불가\n");
        }
        else
            printf("등교가능\n");
    }

    return 0;
}