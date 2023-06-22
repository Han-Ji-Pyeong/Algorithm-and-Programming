#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double a, b, c, d;
    scanf("%lf %lf", &a, &b);getchar();
    scanf("%lf %lf", &c, &d);getchar();
    printf("%.2lf%%\n", a/b*100);
    printf("%.2lf%%\n", c/d*100);
    return 0;
}