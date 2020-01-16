#include    <stdio.h>  
#include    <stdlib.h>  
#include    <string.h>
  
int main(){  
        float feet,km;  
        //cin >> feet;  
        scanf("%f",&feet);
        km = 1.6 * feet;  
        //cout << fixed << setprecision(1) << km << endl;  
        printf("%.1f\n",km);
        return 0;  
}  