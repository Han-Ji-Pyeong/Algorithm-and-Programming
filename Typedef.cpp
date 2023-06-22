#include <stdio.h>
#include <string.h>

typedef struct Employee{
    int id;
    char name[32];
}EMP;
int main(void){
    EMP info = {1, "B.Smith"};
    printf("Employee name: %s\n", info.name);
    printf("Employee ID: %04d\n\n", info.id);

    getchar();
    return 0;
}