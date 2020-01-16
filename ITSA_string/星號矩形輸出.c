#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

