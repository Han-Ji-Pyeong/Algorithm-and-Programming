#include <stdio.h>
#include <math.h>
#include <string.h>

struct mhs{
    int NIM;
    char name[20];
    float GPA;
};

void bubblesort(struct mhs students[], int count){
    int flag;
    struct mhs temp;
    do{
        flag = 0;
        for (int i = 0; i < count-1; i++){
            if(students[i].GPA < students[i+1].GPA){
                temp = students[i];
                students[i] = students[i+1];
                students[i+1] = temp;
                flag = 1;
            }
        }
    } while(flag == 1);
    do{
        flag = 0;
        for(int i = 0; i < count-1; i++){
            if(abs(students[i].GPA - students[i+1].GPA) < 0.5){
                if(strcmp(students[i].name, students[i].name) > 0){
                    temp = students[i];
                    students[i] = students[i+1];
                    students[i+1] = temp;
                    flag = 1;
                }
            }
        }
    } while(flag == 1);
}

int main(void){
    struct mhs students[20];
    int count;
    FILE *f = fopen("mahasiswa.in", "r");
    while(!(feof(f))){
        fscanf(f, "%d#%[^#s#%f\n", &students[i].NIM, students[i].name, &students[i].GPA);
        count++
    }
    fclose(f);
    for(int i = 0; i < count; i++){
        printf("%d\n", students[0].NIM);
        printf("%s\n", students[0].name);
        printf("%s\n", students[0].GPA);
        printf("\n");
    }
}