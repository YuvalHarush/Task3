#include <stdio.h>

int shift_element (int *arr , int i){
int temp= *(arr+49);
    for(int z=49;z>=i;z--){
        *(arr+z)= *(arr+z-1);
    }
    *(arr+i) =temp;
 
    printf("\nThe new Array Is:\n");
    for(int z=0;z<50;z++){
        printf("%d ",*(arr+z));
    }
}

void insertion_sort(int *arr, int len){ 
    int i=1;
    int key;
    int j;  
    for (i=1;i<len;i++){
        key = *(arr+i);  
        j = i - 1;
        while(j>=0 && *(arr+j)>key){  
            *(arr+j+1) = *(arr+j);  
            j=j-1;  
        }  
        *(arr+j+1) = key;  
    }
    printf("\nThe new Array Is:\n");
    for(int z=0;z<50;z++){
        printf("%d ",*(arr+z));
    }
        printf("\n");
}  