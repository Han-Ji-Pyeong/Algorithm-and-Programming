#include <stdio.h>

int main(){
	long long int tc;
	scanf("%lld", &tc);
	
	long long int a[505][505], times[505];
	
	for(int i = 0; i < tc; i++) {
		long long int size;
		scanf("%lld", &size);
			for(int j = 0 ; j < size; j++) {
				for(int x = 0; x < size; x++) {
					scanf("%lld", &a[j][x]);	
				}
			}
			for(int i = 0; i < size; i++){
				times[i] = 0;
				for(int j = 0; j < size; j++){
					times[i] += a[j][i];
				}
			}
			printf("Case #%d: ", i + 1);
				for(int x = 0; x < size; x++) {
					if(x == size-1){
						printf("%lld\n", times[x]);
					
					} else if(x == size-1){
						printf("%lld\n", times[x]);
					} 
					else{
						printf("%lld ", times[x]);
					}		
				}
	}
}