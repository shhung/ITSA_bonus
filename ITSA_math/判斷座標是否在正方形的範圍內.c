#include    <stdio.h>  
#include    <stdlib.h>  
#include    <string.h>
  
int main(){  
        int x,y;  
        scanf("%d %d",&x,&y);
        if(x <= 100 && y <= 100){
            printf("inside\n");
        }else{
            printf("outside\n");
        }
        return 0;
}  