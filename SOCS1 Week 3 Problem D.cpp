#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t, a = 0;
	scanf("%d", &t); t = 3;
	double op1, op2, op3;
	for(int i = 0; i < 3; i++)
	{
		scanf("%d", &a);
		
		op1  = ((double)4/5) * ((double)a);
		op2  = (((double)9/5) * ((double)a)) + 32;
		op3  = ((double)a) + 273;
		printf("%.2lf %.2lf %.2lf\n", op1, op2, op3);
	}
//   printf("%.2lf %.2lf %.2lf\n", op1[0], op2[0], op3[0]);
//   printf("%.2lf %.2lf %.2lf\n", op1[1], op2[1], op3[1]);
//   printf("%.2lf %.2lf %.2lf\n", op1[2], op2[2], op3[2]);

    return 0;
}