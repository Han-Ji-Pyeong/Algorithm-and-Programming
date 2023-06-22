#include <stdio.h>

int main(void){
    int n, m, q;
    scanf("%d %d %d", &n, &m, &q);
    int arr[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            arr[i][j] = 0;
        }
    }
    int rn, rm, qq;
    for(int i = 0; i<q; i++){
        scanf("%d %d %d", &rn, &rm, &qq);getchar();
        arr[rn][rm] = qq;
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(j == m-1){
                printf("%d\n", arr[i][j]);
            }
            else{
                printf("%d ", arr[i][j]);
            }
        }
    }
}