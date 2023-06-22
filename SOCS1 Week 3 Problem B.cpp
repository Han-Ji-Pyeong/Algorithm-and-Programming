#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double t, a, b, c, d;
    scanf("%lf", &t); t = 3;
    float e, f, g, h;
    float total[3];
    for(int i=0; i<3; i++)
    {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);getchar();
        e = a/1;
        f = b/2;
        g = c/3;
        h = d/4;

        total[i] = 2*e + 4*f + 4*g + 2*h;
    }
    printf("%.2lf\n", total[0]);
    printf("%.2lf\n", total[1]);
    printf("%.2lf\n", total[2]);

    return 0;
}