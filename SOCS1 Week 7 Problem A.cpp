#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c, n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a >= b && a >= c)
        {
            arr[i] = b + c > a;
        }
        else if(b >= a && b >= c){
            arr[i] = a + c > b;
        }
        else if(c >= a && c >= b){
            arr[i] = a + b > c;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i])
        {
            printf("BISA\n");
        }
        else
        {
            printf("TIDAK BISA\n");
        }
    }
    return 0;
}