#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, k, t;
	scanf("%d %d" ,&t,&n); getchar();
	for(int f=0; f<t; f++){
		k=1;
		for(int i = 0; i<n; i++){
			for(int j = n; j>0; j--){
				if(j<=k){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			k++;
			printf("\n");
	}
}
	return 0;
}