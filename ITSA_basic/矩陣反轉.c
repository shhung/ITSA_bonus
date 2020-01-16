#include  <stdlib.h>
#include  <stdio.h>

int main(){
    int row,col;
    int arr[64][64];
    scanf("%d %d",&row,&col);
    for(int i=0;i<row;i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            if(j!=0){
                printf(" ");
            }
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}