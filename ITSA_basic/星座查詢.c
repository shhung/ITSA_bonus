#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a == 1){
        if(b<21){
            printf("Capricorn\n");
        }
        else{
            printf("Aquarius\n");
        }
    }
    else if(a == 2){
        if(b<19){
            printf("Aquarius\n");
        }
        else{
            printf("Pisces\n");
        }
    } 
    else if(a == 3){
        if(b<21){
            printf("Pisces\n");
        }
        else{
            printf("Aries\n");
        }
    } 
    else if(a == 4){
        if(b<21){
            printf("Aries\n");
        }
        else{
            printf("Taurus\n");
        }
    } 
    else if(a == 5){
        if(b<22){
            printf("Taurus\n");
        }
        else{
            printf("Gemini\n");
        }
    } 
    else if(a == 6){
        if(b<22){
            printf("Gemini\n");
        }
        else{
            printf("Cancer\n");
        }
    } 
    else if(a == 7){
        if(b<23){
            printf("Cancer\n");
        }
        else{
            printf("Leo\n");
        }
    } 
    else if(a == 8){
        if(b<24){
            printf("Leo\n");
        }
        else{
            printf("Virgo\n");
        }
    } 
    else if(a == 9){
        if(b<24){
            printf("Virgo\n");
        }
        else{
            printf("Libra\n");
        }
    } 
    else if(a == 10){
        if(b<24){
            printf("Libra\n");
        }
        else{
            printf("Scorpio\n");
        }
    } 
    else if(a == 11){
        if(b<23){
            printf("Scorpio\n");
        }
        else{
            printf("Sagittarius\n");
        }
    } 
    else if(a == 12){
        if(b<22){
            printf("Sagittarius\n");
        }
        else{
            printf("Capricorn\n");
        }
    } 
    return 0;
}