#include <stdio.h>

int main(void){
    int x, y;
    scanf("%d %d", &x, &y);getchar();
    int arr[x][y];
    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j<y ; j++){
            scanf("%d", &arr[i][j]);getchar();
        }
    }

    int change;
    int rx, ry, rr;
    scanf("%d", &change);getchar();
    for(int i = 0; i < change; i++){
        scanf("%d %d %d", &rx, &ry, &rr);getchar();
        arr[rx-1][ry-1] = rr;
    }

    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j<y ; j++){
            if(j == y-1){
                printf("%d\n", arr[i][j]);
            }
            else{
                printf("%d ", arr[i][j]);
            }
        }
    }
    return 0;
}