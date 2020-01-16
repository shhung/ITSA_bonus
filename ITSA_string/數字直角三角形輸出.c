#include<stdio.h>

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i; j++){
                printf(" ");
            }
            if(i%2 == 0){
                for(int j=i; j>=1; j--){
                    printf("%d",j);
                }
            }else{
                for(int j=1; j<=i; j++){
                    printf("%d",j);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
