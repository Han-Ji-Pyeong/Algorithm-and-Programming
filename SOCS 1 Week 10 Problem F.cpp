#include <stdio.h>
#include <string.h>

int main(void){
    double r, h;
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
    scanf("%lf %lf", &r, &h);
    double circles = (3.14 * (r*r)) * 2;
    double square = (2*3.14*r) * h;
    printf("Case #%d: ", i+1);
    printf("%.2lf\n", circles + square);
    }
}