#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, flag = 0;
    scanf("%d", &n);
    int people[n*n];
    int missing = n;
    for(int i=0; i<n*n; i++){
        scanf("%d", &people[i]);getchar();
    }
    for(int i=1; i<=n; i++){
        int k=0;
        for(int j=0; j<n*n; j++){
            if(i == people[j]){
                k++;
            }
        }
        if(k>=n){
            missing --;
        }
    }
    printf("%d\n", missing);
}