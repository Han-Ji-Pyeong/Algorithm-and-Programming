#include <stdio.h>
#include <string.h>

#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("testdata.in", "r");
    //f = fopen("data2.txt", "r");
    
    int T;
    fscanf(f, "%d", &T); fgetc(f);
    
    while (T--){
        char X[101];
        fscanf(f, "%[^\n]", X); fgetc(f);
        
        int N; // jml proses perubahan
        fscanf(f, "%d", &N); fgetc(f);
        
        // ubah huruf dari old ke new
        char old, now;
        int flag[26] = {0};
        while(N--){
            fscanf(f, "%c %c", &old, &now); fgetc(f);
                        
            // lewati jika huruf sudah pernah diubah
            if (flag[old-'A']) continue;
            
            for (int j=0; X[j] != '\0'; j++)
                if (X[j] == old) X[j] = now;
                
            flag[old-'A'] = 1;
        }
        
        // hitung freq huruf
        int Freq[26] = {0};
        for (int j=0; X[j] != '\0'; j++)
            Freq[X[j]-'A']++;
        
        // tampilkan freq huruf sesuai urutan abjad
        for (int c=0; c<26; c++)
            if (Freq[c])
                printf("%c %d\n", c+'A', Freq[c]);
    }
    fclose(f);
    
    return 0;
}