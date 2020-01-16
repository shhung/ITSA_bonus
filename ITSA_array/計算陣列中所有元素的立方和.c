#include    <stdio.h>  
#include    <stdlib.h>  
  
int main(){  
    int arr[100];  
    long sum = 0;  
    long tmp;  
    for(int i=0; i<6; i++){  
        scanf("%d",&arr[i]);  
    }  
    for(int i=0; i<6; i++){  
        tmp = arr[i];  
        tmp *= tmp*tmp;  
        sum += tmp;  
    }  
    printf("%ld\n",sum);  
  
  
    return 0;  
} 