#include  <stdlib.h>
#include  <stdio.h>

int main(){
    int n,sum = 0;;
    scanf("%d",&n);
    for(int i=3; i<= n ;i+=3){
        sum += i;
    }
    printf("%d\n",sum);
    return 0;
}