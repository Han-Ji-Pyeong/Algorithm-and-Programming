#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t, a, b = 0;
    scanf("%d", &t); t = 3;
   int op[3];
    for(int i = 0; i < 3; i++)
    {
        scanf("%d %d", &a, &b);
        op[i] = ((a/b) << b);

    }
    printf("%d\n", op[0]);
    printf("%d\n", op[1]);
    printf("%d\n", op[2]);

    return 0;
}