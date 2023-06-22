#include <stdio.h>

int main(void){
    int n, t;
    scanf("%d", &t);
    for(int k = 0; k < t; k++){
    scanf("%d", &n);getchar();
    long long int arr[n][n];
    long long int totalarr[n] = {0};

    for(int i = 0; i<n ; i++){
        for(int j = 0; j<n ; j++){
            scanf("%lli", &arr[i][j]);getchar();
            totalarr[j] += arr[i][j];
        }
    }
    printf("Case #%d:", k+1);
    for(int i = 0; i < n ; i++){
         printf(" %lli", totalarr[i]);
    }
    printf("\n");
}
}