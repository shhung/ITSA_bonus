#include    <stdio.h>
#include    <stdlib.h>
#include    <math.h>

int main(){
    long a;
    long sum;
    while(scanf("%ld\n",&a) != EOF){
        sum = 1;
        for(int i=1; i<=a; i++){
            sum *= i;
        }
        printf("%ld\n",sum);
    }
    return 0;
}