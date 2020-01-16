#include    <stdio.h>  
#include    <stdlib.h>  
#include    <string.h>
  
int main(){  
    int n,a,b,c;
    int sum;
    scanf("%d\n",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d %d\n",&a,&b,&c);
        sum = 0;
        sum = a+b+c;
        if(a>=60 && b>=60 && c>=60){
            printf("P\n");
        }
        else if(sum >= 220){
            printf("P\n");
        }
        else if((a>=60 && b>=60) || (a>=60 && c>=60) || (b>=60 && c>=60) ){
            printf("M\n");
        }
        else if(a>=80 || b>=80 || c>=80){
            printf("M\n");
        }
        else{
            printf("F\n");
        }
    }

}  