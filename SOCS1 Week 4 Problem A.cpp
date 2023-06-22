#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    long long int left = a*b; 
    int right = c-d;
    if(left==right)
    {
        printf("True");
    }  
    else
    {
        printf("False");
    }
    return 0;
}
