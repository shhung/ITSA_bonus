#include    <stdio.h>
#include    <stdlib.h>

int main(){
    int x,y;
    float a;
    while(scanf("%d %d\n",&x,&y) != EOF){
        a = x*(float)y/2.0;
        printf("%.1f\n",a);
    }
    return 0;
}