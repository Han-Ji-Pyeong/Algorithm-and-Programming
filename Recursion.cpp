#include <stdio.h>

int Flood(int i, int j, int R, int C, char M [100][100]){
    if(M[i][j]=='#') return 0;
    int F=0;
    if(M[i][j]=='.') F=1;
    M[i][j]='#';

    if(i>0) F+=Flood(i-1,j,R,C,M); //top
    if(i<R-1) F+=Flood(i+1,j,R,C,M); //bottom
    if(j>0) F+=Flood(i,j-1,R,C,M); //left
    if(j<C-1) F+=Flood(i,j+1,R,C,M); //right

    return F;
}
int main(void){
    int T;
    scanf("%d",&T); getchar();
    for(int k=1;k<=T;k++){
         int Row, Col;
        scanf("%d %d", &Row, &Col); getchar();
        char Map[100][100];
        int x,y;
        for(int i=0;i<Row;i++){
            for(int j=0;j<Col;j++){
                scanf("%c",&Map[i][j]); getchar();
                if(Map[i][j]=='S'){
                    x=i;y=j;
                }
            } 
        }
        int Tile=Flood(x,y,Row,Col,Map);
        printf("Case #%d; %d\n",k,Tile);
    }
    return 0;   
}