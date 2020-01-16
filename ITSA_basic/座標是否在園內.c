#include    <stdio.h>  
#include    <stdlib.h>  
#include    <string.h>
  
void    test(int x,int y){   
        int n;  
        n = x*x + y*y;  
        if(n <= 40000)  
            printf("inside\n");
        else  
            printf("outside\n");
}      
  
  
int main(){  
        int x,y;  
        scanf("%d %d",&x,&y);
        test(x,y);  
        return 0;
}  