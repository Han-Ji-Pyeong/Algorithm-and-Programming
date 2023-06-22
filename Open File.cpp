#include <stdio.h>

int main(){
    int order[10]={0};
    char name[10][200]={""};

    int n=0;  //for counting number of rows
    int i=0;

    //part 1 - read data from a file
    FILE *in = fopen("data.in","r");    //read file (stdin)
    if(in==NULL) printf("Failed to open file!!\n");   //optional (debugging)

    //read the given stream untill the end of file EOF
    while(!feof(in)){ //feof(in)==0
    //example data
    //4 Iggy 3
    fscanf(in, "%e %s\n", &order[n], &name[n]);
    n++;
    }

    //part 2 printf the data and add additional format
    printf("%-5s %-15s\n", "Order", "Koopalings");   //Header
    for(i=0;i<n ; i++) {
        printf("%-5d %-15s\n", order[i], name[i]);
    }
    fclose(in);
    return 0;
}