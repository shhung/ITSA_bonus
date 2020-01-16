#include    <stdio.h>
#include    <stdlib.h>

int main(){
    int m,n;
    while(scanf("%d %d\n",&m,&n) != EOF){
        printf("%d\n",(m+n)*(m+n));
    }
    return 0;
}