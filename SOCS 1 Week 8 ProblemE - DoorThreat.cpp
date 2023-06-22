#include <stdio.h>

int main(void){
    int n,m;
    int t;
    scanf("%d", &t);
    for(int k = 0; k<t; k++){
    scanf("%d %d", &n, &m);
    int arr[n];
    int freq[n];
    int mult;
    for(int i = 0; i<n; i++){
        arr[i] = i+1;
        freq[i] = -1;
    }
    for(int i = 0; i<m ; i++){
        scanf("%d",&mult);
        for(int j = 0; j < n;j++){
            if(arr[j] % mult == 0){
                if(freq[j] == -1){
                    freq[j] = 0;
                }
                else if(freq[j] == 0){
                    freq[j] = -1;
                }
            }
        }
    }
    printf("Case #%d:", k+1);
    int flag = 0;
    for(int i = 0; i<n; i++){
        if(freq[i] == -1){
            printf("% d", arr[i]);
            flag++;
        }
    }
    if(flag == 0){
        printf(" No room left!\n");
    }
    else{
        printf("\n");
    }
    }
}