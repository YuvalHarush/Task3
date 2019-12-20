#include <stdio.h>
#include "Texting.h"
#define TEXT 7680

void PartBQuestion (){
    char Text [TEXT];
    printf ("\n");
    printf ("PART TWO- TEXT WILL NOW COMMANCE:\n");
    printf ("Please enter a Text: ");
    gets(Text);
    printf ("A) Print all sentences with chosen words: \n");
    print_lines (Text);
    printf ("B) Print all simillar words to a chosen word: \n");
    print_similar_words (Text);
}