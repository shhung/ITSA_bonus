#include    <stdio.h>
#include    <stdlib.h>

int main(){
    int n;
    while(scanf("%d\n",&n) != EOF){
        printf("%d %d %d\n",n,n*n,n*n*n);
    }
    return 0;
}