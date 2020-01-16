#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

int main(){
    int m,n,diff;
    scanf("%d %d",&m,&n);
    if(m>n){
        diff = m-n;
    for(int i=m; i>= n; i--){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }     
    }
    else{
        diff = n-m;
    for(int i=m; i<= n; i++){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }         
    }

}

