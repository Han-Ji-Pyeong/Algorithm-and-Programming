#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);getchar();
    printf("%.4lf%%", b/a*100);
    return 0;

}