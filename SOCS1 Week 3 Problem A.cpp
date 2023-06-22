#include<stdio.h>

int main(){
	double n = 0;
	scanf("%lf",&n);getchar();
	double points = 0, bonus = 0; 
	for(int i=0; i<n; i++){
		
		if(i == 0){
			bonus = 0;
			
		}
		else{
			
			bonus = bonus + 50;
		}
		points = points + 100 + bonus;
		
	}
	
	printf("%.lf\n",points);
	
	return 0;
}