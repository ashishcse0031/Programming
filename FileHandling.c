#include<stdio.h>  

void fileCopy(){
    FILE *fp ,*fp_dup ;  
    char ch ;  
    fp = fopen("sample.txt","r") ;  
    fp_dup=fopen("sample_copy.txt","w");
    
    while ( 1 )  {  
       ch = fgetc ( fp ) ;  
       if ( ch == EOF )  
          break ;  
       fputc(ch,fp_dup);
    }  

    fclose (fp) ;  
    fclose (fp_dup) ; 

}

void fileRead(){
    FILE *fp ;  
    char ch ;  
    fp = fopen("sample_copy.txt","r") ;  
    
    while ( 1 )  {  
       ch = fgetc ( fp ) ;  
       if ( ch == EOF )  
          break ;  
       printf("%c",ch) ;  
    }  

    fclose (fp ) ;  

}


void charCount(){
    FILE *fp=fopen("sample.txt","r");
    int count = 0;

    while(fgetc(fp) != EOF)
        count++;
    
    printf("\n\n no of characters = %d",count);

}

void lineCount(){
    FILE *fp=fopen("sample.txt","r");
    int count = 0;
    int ch;

    while((ch=fgetc(fp)) != EOF)
        if(ch == '\n')
            count++;
    
    printf("\n\n no of lines = %d",count);

}


void wordCount(){
    FILE *fp=fopen("sample.txt","r");
    int count = 0;
    int ch;

    while((ch=fgetc(fp)) != EOF){
        if(ch == ' ' || ch == '\n' || ch == '\t')
            count++;

    }
    
    printf("\n\n no of words = %d",count);


}



void main( )  {  
    fileCopy();
    fileRead();
    charCount();
    lineCount();
    wordCount();
    
}  

