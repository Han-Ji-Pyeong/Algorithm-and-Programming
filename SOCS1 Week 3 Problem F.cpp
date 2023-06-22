#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c); getchar();
    printf("%.2lf", a*20/100+b*30/100+c*50/100 );

    return 0;
}