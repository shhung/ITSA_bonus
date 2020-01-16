#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i-1; j++){
                printf(" ");
            }
            for(int j=0; j<= i; j++){
                printf("%d",j+1);
            }
            for(int j=i; j>0; j--){
                printf("%d",j);
            }
            for(int j=0; j<n-i-1; j++){
                printf(" ");
            }        
            printf("\n");
        }
        for(int i=n-2; i>=0; i--){
            for(int j=0; j<n-i-1; j++){
                printf(" ");
            }
            for(int j=0; j<= i; j++){
                printf("%d",j+1);
            }
            for(int j=i; j>0; j--){
                printf("%d",j);
            }
            for(int j=0; j<n-i-1; j++){
                printf(" ");
            }    
            printf("\n");        
        }
    }
    

    return 0;
}

