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
            printf("��Ұ�\n");
        }
        else
            printf("�����\n");
    }

    return 0;
}