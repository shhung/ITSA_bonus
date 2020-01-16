#include<stdio.h>

int main() {
    int n;
    int d;
    int arr[5];
    while(scanf("%d",&n)!=EOF) {
        d = 10000;
        for(int i=0; i<5; i++){
            arr[i] = n/d;
            n = n%d;
            d /= 10;
        }
        for(int i=0;i<5;i++){
            if(i == 0){
                printf("%d",arr[i]);
            }else{
                printf("   %d",arr[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
