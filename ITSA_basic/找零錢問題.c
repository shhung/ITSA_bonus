#include    <stdio.h>
#include    <stdlib.h>

int main(){
    int total,x,y,z;
    int a,b,c;
    scanf("%d,%d,%d,%d",&total,&x,&y,&z);
    x *= 15;
    y *= 20;
    z *= 30;
    if(total < (x+y+z)){
        printf("0\n");
    }
    else{
        total = (total - x - y - z);
        a = total / 50;
        total %= 50;
        b = total / 5;
        total %= 5;
        c = total;
        printf("%d,%d,%d\n",c,b,a);
    }
    return 0;
}