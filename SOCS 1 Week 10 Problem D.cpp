#include <stdio.h>
#include <string.h>

int main(void){
    int n, t;
    scanf("%d", &t);
    for(int k = 0; k<t; k++){
    scanf("%d", &n);
    int plus = 0;
    int sum = 1;
    printf("Case %d:", k+1);
    for(int i = 1;i<=n;i++){
        sum += plus;
        printf(" %d", sum);
        plus++;
    }
    printf("\n");
    }
}