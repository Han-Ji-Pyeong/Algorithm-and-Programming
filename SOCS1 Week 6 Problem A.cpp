#include <stdio.h>
#include <string.h>

int main(void)
{
	int T; 
	scanf("%d" , &T); getchar();
	for(int i = 0; i < T; i++){
		
		char str[1002] = {0};
		scanf("%[^\n]", &str); getchar();
		int n = strlen(str);
		printf("Case #%d: ", i+1);
		for(int j=n ; j>0; j--){
			if(str[j] < 97){
				str[j] += 32;
			}
			else{
				str[j] -=32;
			}
			printf("%c", str[j]);
		}
		printf("\n");
	}
	return 0;
}