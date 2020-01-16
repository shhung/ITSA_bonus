#include<stdio.h>

int main() {
    int n;
    int a,i,j;
    while(scanf("%d",&n)!=EOF) {
        if(n%2==0) {
            n=n-1;
        }
        for(a=1;a<=n/2+1;a++) {
            for(i=1;i<=n/2+1-a;i++) {
                printf(" ");
            }
            for(j=1;j<=2*a-1;j++) {
                printf("*");
            }
            printf("\n");
        }
        for(a=1;a<=n-n/2-1;a++) {
            for(i=1;i<=a;i++) {
                printf(" ");
            }
            for(j=1;j<=n-2*a;j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
    }
