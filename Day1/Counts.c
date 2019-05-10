#include<stdio.h>

void charCount(){
    
    int  noWords=0;

    while(getchar()!= EOF)
         noWords ++;
    
    printf("you have typed  %d  many chars",noWords);


}

void lineCount(){
    int c,noLine=0;

    while((c=getchar())!= EOF){
        if(c=='\n')
           noLine++;

    }
         
    
    printf("you have   %d  lines ",noLine);
} 



main(){
    charCount();  
    lineCount();  
}