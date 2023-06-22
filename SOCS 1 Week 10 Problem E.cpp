#include <stdio.h>
#include <string.h>

int main(void){
    int n, a, b, k, temp = 0,  total = 0, t;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d", &t);
    for(int j = 0; j<t; j++){
    temp = 0;
    total = 0;
    fscanf(fp, "%d %d %d", &n, &a, &b);
    char m[10001];
    fscanf(fp, "%s\n", m);
    for(int i = 0; i<n; i++){
        if(m[i] == '1'){
            temp++;
        }
        else if(m[i]=='0'){
            if(temp >= a && temp <= b){
                total++;
                temp = 0;
            }
            else{
                temp = 0;
            }
        }
    }
    if(temp >= a && temp <= b){
        total++;
    }
    printf("Case #%d: ", j+1);
    printf("%d\n", total);
    }
}