#include    <stdio.h>
#include    <stdlib.h>
#include    <math.h>

int main(){
    int n,p;
    double sum;
    while(scanf("%d %d\n",&n,&p) != EOF){
        sum = 0;
        if(n <= 60){
            sum = n*p;
        }
        else if(n>60 && n <121){
            sum += 60*p;
            sum += p*1.33*(n-60);
        }
        else{
            sum += p*60;
            sum += p*1.33*60;            
            sum += p*1.66*(n-120);
        }
        printf("%.1f\n",sum);
    }
    return 0;
}