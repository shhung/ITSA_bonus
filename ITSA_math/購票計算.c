#include    <stdio.h>
#include    <stdlib.h>
#include    <math.h>

int main(){
    int a;
    int x,y,z;
    while(scanf("%d\n",&a) != EOF){
        x = a/10;
        a = a%10;
        y = a/5;
        a = a%5;
        z = a;
        printf("NT10=%d\n",x);
        printf("NT5=%d\n",y);
        printf("NT1=%d\n",z);
    }
    return 0;
}