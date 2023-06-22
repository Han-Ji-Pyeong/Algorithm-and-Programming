#include <stdio.h>
#include <stdlib.h>

int strlen(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len = len + 1;
    }
    return len;
}

int main(void)
{
    int t;
    scanf("%d", &t);getchar();
    for(int j = 0; j < t; j++){
        char word[1000];
        char newword[1000];
         scanf("%[^\n]", word);getchar();
         int length = strlen(word);
         int k = length-1;
         for(int i = 0; i < length; i++){
            newword[i] = word[k];
            k--;
         }
         newword[length] = '\0';
         printf("Case #%d: ", j+1);
         printf("%s\n", newword);
    }
}