#include    <stdio.h>
#include    <stdlib.h>

int main(){
    int x,y;
    float a;
    while(scanf("%d %d\n",&x,&y) != EOF){
        printf("%d\n",x+y);
    }
    return 0;
}