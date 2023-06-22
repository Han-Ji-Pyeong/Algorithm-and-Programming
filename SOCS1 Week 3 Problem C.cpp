#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double t, a, b = 0;
    scanf("%lf", &t); t = 3;
    double total[3];
    for(int i = 0; i < 3; i++)
    {
        scanf("%lf %lf", &a, &b);getchar();
        total[i] = a/100*b;
    }
    printf("%.2lf\n", total[0]);
    printf("%.2lf\n", total[1]);
    printf("%.2lf\n", total[2]);
   
    return 0;
}