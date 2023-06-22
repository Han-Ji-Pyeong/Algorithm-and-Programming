#include <stdio.h>

int main(void)
{
    float l, b, h;
    scanf("%f %f %f", &l, &b, &h); getchar();
    //3 digits behind berarti .3f
    printf("%.3f\n", 3*l*b+b*h);
}