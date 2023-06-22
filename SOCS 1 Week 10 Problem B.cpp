#include <stdio.h>
#include <string.h>

int main (void){
    int t;
    scanf("%d", &t);
    getchar();
    
    long long int n, sisa, nums, result;

    for(int i = 0; i < t; i++){
        long long int reverse = 0;
        scanf("%lld", &n);
        nums = n;

        while (n != 0){
            sisa = n % 10;
            reverse = reverse*10 + sisa;

            n /= 10;
        }

        result = nums + reverse;

        printf("Case #%d: %lld\n", i + 1, result);
    }
    return 0;
}