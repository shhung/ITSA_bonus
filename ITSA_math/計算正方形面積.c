#include    <stdio.h>
#include    <stdlib.h>

int main(){
    float x;
    float a;
    while(scanf("%f\n",&x) != EOF){
        a = x*x;
        if((int)(a * 100.) % 10 > 4){
            a = x*x + 0.1;
        }
        printf("%.1f\n",a);
    }
    return 0;
}