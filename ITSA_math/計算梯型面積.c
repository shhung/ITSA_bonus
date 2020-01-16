#include    <stdio.h>
#include    <stdlib.h>

int main(){
    int x,y,z;
    float a;
    while(scanf("%d %d %d\n",&x,&y,&z) != EOF){
        a = (x+y)*(float)z/2.0;
        printf("Trapezoid area:%.1f\n",a);
    }
    return 0;
}