#include<stdio.h>
#include<malloc.h>


int  maxArray(int array[],int size){
    int max=array[size];

    while(size >=0){
        if( array[size] > max){
            max = array[size];
            size --;
            printf(" \n  \t size = %d",size);
        }
    }


    return max;
    
}

int minArray(int array[],int size){
    int min=array[size];
    
    while(size >=0){
        if( array[size] < min){
            min = array[size];
            size --;
        }
    }


    return min;
    
}



int averageArray(int array[],int size){
    int sum=0;
    int no_element=size;
    
    while(size >=0)
        sum+=array[size];


    return sum/no_element;
    
}


int  linearSearch(int array[],int size,int item){
     for(;size>=0;size--){
         if(array[size] == item)
            return size;
     }
    
    return -1;
}






void main(){
    int array[5];
    int i;

    printf("enter the elements of array \t  \n");
    
    /* input in the array */

    for(i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
   
    /* print array element */

    for(i=0;i<5;i++){
        printf("%d \t",array[i]);
    }
   

    //printf(" \n max element of array = %d",maxArray(array,5));

    //printf(" \n min element of array = %d",minArray(array,10));

    //printf(" \n avearage element of array = %d",averageArray(array,10));

    //printf(" \n element 5 at position  = %d",linearSearch(array,10,5));



}


