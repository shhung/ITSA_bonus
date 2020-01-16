#include    <stdio.h>
#include    <stdlib.h>

int main(){
    int arr[100];
    int i = 0;
    while(scanf("%d",&arr[i])!=EOF){
        i++;
    }
    for(int j=0 ;j<i; j++){
        if(j == 0){
            printf("%d",arr[i-j-1]);
        }
        else{
        printf("% d",arr[i-j-1]);    
        }
    }
    printf("\n");

    return 0;
}