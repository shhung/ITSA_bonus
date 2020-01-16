#include    <stdio.h>  
#include    <stdlib.h>  
#include    <string.h>
  
int main(){  
    int n;
    while(scanf("%d",&n) != EOF){
        if(n%4 == 0){
            if(n%400 == 0){
                printf("Bissextile Year\n");
            }
            else if(n%100 == 0){
                printf("Common Year\n");
            }
        }
        else{
            printf("Common Year\n");
        }
    }
    return 0;  
}  