#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);getchar();
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ;j++){
            scanf("%d", &arr[j][i]);getchar();
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ;j++){
            if(j == n-1){
                printf("%d\n", arr[i][j]);
            }
            else{
            printf("%d ", arr[i][j]);
            }
        }
    }
    return 0;
}