#include  <stdlib.h>
#include  <stdio.h>

int func(int n){
    if(n == 0 || n ==1){
        return n+1;
    }
    else{
        return func(n-1) + func(n/2);
    }
}

int main(){
    int n,asw;
    scanf("%d",&n);
    asw = func(n);
    printf("%d\n",asw);
    return 0;
}