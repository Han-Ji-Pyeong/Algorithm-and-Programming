#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	
	char a[1100];
	
	
	for(int i = 0; i < tc; i++){
		scanf("%s", &a);
		int length;
		length = strlen(a);
		printf("Case #%d : ", i+1);
		for(int j = length-1 ; j >= 0; j--){
			printf("%c", a[j]);
		}
		printf("\n");
	}

}
