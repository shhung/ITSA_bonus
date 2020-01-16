#include    <stdio.h>  
#include    <stdlib.h>  
#include    <string.h>
  
void set(int a[5][5], int n){  
    int i,j;  
    switch(n){  
        case 0:  
            for(i = 0; i < 5; i++){  
                a[0][i] = 1;  
                a[4][i] = 1;  
                a[i][0] = 1;  
                a[i][4] = 1;  
            }  
            break;  
        case 1:   
            for(i = 0;i < 5; i++){  
                a[i][4] = 1;  
            }  
            break;  
        case 2:  
            for(i = 0; i < 5; i++){  
                a[0][i] = 1;  
                a[2][i] = 1;  
                a[4][i] = 1;  
            }  
            a[1][4] = 1;  
            a[3][0] = 1;  
            break;  
        case 3:   
            for(i = 0; i < 5; i++){  
                a[0][i] = 1;  
                a[2][i] = 1;  
                a[4][i] = 1;  
            }  
            a[1][4] = 1;  
            a[3][4] = 1;  
            break;  
        case 4:   
            for(i = 0; i < 5; i++){  
                a[i][4] = 1;  
                a[2][i] = 1;  
            }  
            a[0][0] = 1;  
            a[1][0] = 1;  
            break;  
        case 5:  
            for(i = 0; i < 5; i++){  
                a[0][i] = 1;  
                a[2][i] = 1;  
                a[4][i] = 1;  
            }  
            a[1][0] = 1;  
            a[3][4] = 1;  
            break;    
        case 6:   
            for(i = 0; i < 5; i++){  
                a[0][i] = 1;  
                a[2][i] = 1;  
                a[4][i] = 1;  
            }  
            a[1][0] = 1;  
            a[3][0] = 1;  
            a[3][4] = 1;  
            break;  
        case 7:  
            for(i = 0;i < 5; i++){  
                a[i][4] = 1;  
                a[0][i] = 1;  
            }  
            break;  
        case 8:   
            for(i = 0; i < 5; i++){  
                a[0][i] = 1;  
                a[2][i] = 1;  
                a[4][i] = 1;  
                a[i][0] = 1;  
                a[i][4] = 1;  
            }  
            break;        
        case 9:   
            for(i = 0; i < 5; i++){  
                a[0][i] = 1;  
                a[2][i] = 1;  
                a[i][4] = 1;  
            }  
            a[1][0] = 1;  
            break;    
    }  
}  
  
int main(int argc, char *argv[]){  
    char c;  
    int input[4];  
    int output[5][23], num[5][5];  
    memset(output, 0, sizeof(int) * 5 * 23);  
    int i;  
    int row,col,diff;  
    int start_off[4] = {0,6,12,18};  
  
    for(i=0; i<4; i++){  
        //cin >> c;  
        scanf("%c",&c);
        input[i] = c - '0';  
        memset(num, 0, sizeof(int) * 5 * 5);  
        set(num, input[i]);  
          
        diff = start_off[i];  
        for(row=0; row<5; row++){  
            for(col = diff; col < diff+5; col++){  
                output[row][col] = num[row][col-diff];   
            }  
        }  
    }  
    for(row = 0; row < 5; row++){  
        for(col = 0; col < 23; col++){  
            if(output[row][col] == 1)  
                //cout << "*";  
                printf("*");
            else  
                //cout << " ";  
                printf(" ");
        }  
        //cout << endl;  
        printf("\n");
    }     
    return 0;  
}  