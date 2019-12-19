/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "Sorting.h"
#include "Texting.h"
#define TEXT 7680
#define size 50
//TEXT= max lines X max words in lines= 256 X 30= 7680;


int main(){
    //PART 1 Definitions:
    int arrs [size]= {NULL};
    int temp =0; int num=0; int flag1=0; int element_index= 0; int max_num=0;
    // PART 2 definitions:
    char Text [TEXT];
    
    //PART 1 (30 Pts):
    printf ("PART ONE- SORTING:\n");
    printf ("\n");
    printf ("An array with 50 numbers is going to be set\n");
    printf("please set integer numbers  int the arrays, press '-1' if you prefer to define the rest numbers of the array to be 0\n");
    for (int i=0; i<size; i++){
        if (flag1==0){
        printf ("Array[%d]= \n", i);
            if (scanf(" %d", &num)!=1){
            return printf("invalid input\n");}
            if (num!=-1){
                arrs[i]= num;
            } if (num==-1) {
                flag1=1;
               }    
        }
        if (flag1==1){
            num =0;
            arrs[i]= NULL;
            }
    }
    printf ("The Array you chose is: \n");
    for (int i=0; i<size; i++){
        printf ("%d, ", arrs[i]); i++;printf ("%d, ", arrs[i]); i++;printf ("%d, ", arrs[i]); i++;printf ("%d, ", arrs[i]); i++;printf ("%d, \n", arrs[i]); i++;
    }
        printf ("Choose the max size of the array you entered, that array will be sorted, mind that the max number of elements is 50: \n");
    if (scanf(" %d", &max_num)!=1){
            return printf("invalid input\n");
    }    
    insertion_sort (arrs, max_num);
        printf ("Choose the index where all elements after it would be shifted right: \n");
    if (scanf(" %d", &element_index)!=1){
            return printf("invalid input\n");
    }
    shift_element(arrs,element_index);
    
    //PART 2 (70 Pts):
    printf ("\n");
    printf ("PART TWO- TEXT WILL NOW COMMANCE:\n");
    printf ("Please enter a Text: ");
    gets(Text);
    printf ("A) Print all sentences with chosen words: \n");
    print_lines (Text);
    printf ("B) Print all simillar words to a chosen word: \n");
    print_similar_words (Text);
}
