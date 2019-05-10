#include<stdio.h>

void main(){
    int lower,upper,step;
    int fahr,celsius;

    lower=0;
    upper=300;
    step=20;
    
    fahr=step;

    while(fahr<=upper){
        celsius=5*(fahr-32)/9;
        printf("%d  \t %d  \n ",fahr,celsius);
        fahr=fahr+20;
    }
}