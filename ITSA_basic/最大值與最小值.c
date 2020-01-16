#include    <stdio.h>
#include    <stdlib.h>

int main(){
    float max,min,tmp;
    for(int i=0; i<10 ; i++){
        scanf("%f",&tmp);
        if(i == 0){
            max = tmp;
            min = tmp;
        }
        else{
            if(tmp > max){
                max = tmp;
            }
            if(tmp < min){
                min = tmp;
            }
        }
    }
    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);
    return 0;
}