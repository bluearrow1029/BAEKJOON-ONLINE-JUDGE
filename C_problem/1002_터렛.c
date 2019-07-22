//문제 출처: https://www.acmicpc.net/problem/1002
#include <stdio.h>
#include <math.h>

int main ()
{
    int T, x1, y1, r1, x2, y2, r2 = 0;
    double d = 0.0;
    scanf("%d",&T);

    for (; T > 0; T--)
    {
        // -10000 <= x1,y1,x2,y2 <= 10000
        // 0 < r1,r2 <= 10000
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        d = sqrt(pow(x1-x2, 2.0)+pow(y1-y2, 2.0));

        if(x1 == x2 && y1 == y2)
        {
            if(r1 != r2)
                printf("0\n");
            else
                printf("-1\n");
        }
        else
        {
            if(r1+r2 > d && abs(r1-r2) < d)
                printf("2\n");
            else if(r1+r2 == d || abs(r1-r2) == d)
                printf("1\n");
            else if(r1+r2 < d || abs(r1-r2) > d)
                printf("0\n");
        }
    }
    return 0;
}