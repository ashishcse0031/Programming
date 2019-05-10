#include<stdio.h>

typedef struct student {
    int rollNo;
    char name[100];
    float marks;
} STUDENT;



void main(){
    int i;

    STUDENT s[3];

    /*input  details */

    for ( i=0;i<3;i++){
         scanf("%d",&s[i].rollNo);
         scanf("%s",s[i].name);
         scanf("%f",&s[i].marks);
    }

    /*print details */
    printf("\n\n\n\n");

    for ( i=0;i<3;i++){
         printf("%d \t",s[i].rollNo);
         printf("%s \t",s[i].name);
         printf("%f \t",s[i].marks);

         printf("\n");
    }

    return ;
}