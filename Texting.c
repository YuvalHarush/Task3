#include <stdio.h>
#define LINE 256
#define WORD 30

int mygetline (char s[]){
    int white_flag= 1; int pointer_u= 0; char temp[LINE];
    printf ("Please enter a sentence\n");
    gets(temp);
        while (white_flag==1){
            if (temp[pointer_u]== NULL) {
                if (temp[pointer_u+1]== NULL){
                    white_flag=0;    
                } 
                else {
                    pointer_u++;
                }
                
            }
            if (temp[pointer_u]!= NULL) {
                s[pointer_u]= temp[pointer_u];
                pointer_u++;
            }
        }
        printf ("%d\n", pointer_u);
        return pointer_u;
}

int getword (char w[]){
    int white_flag= 1; int pointer_u= 0; char temp[WORD];
    printf ("Please enter a word\n");
    scanf(" %s", temp);
        while (white_flag==1){
            if (temp[pointer_u]== NULL) {
                    white_flag=0;
            }
            if (temp[pointer_u]!= NULL) {
                w[pointer_u]= temp[pointer_u];
                pointer_u++;
            }
        }
        printf ("%d\n", pointer_u);
        return pointer_u;
}

int substring (char *str1, char *str2){
    int counter_i=0; int white_flag=0; int red_flag=1;
    int str1_size= strlen(str1); int str2_size= strlen(str2);
    if (str2_size> str1_size){
        printf("The second sentence or word isn't a substring to the first one\n");
        return 0;
    } else{
        for (int i=0; i<str1_size;i++){
            if (str1[i]==str2[0]){
                white_flag=1;
                counter_i=0;
                red_flag=1;
                while (red_flag==1){
                  if(str1[i+counter_i]!=str2[counter_i]){
                      white_flag=0;
                      red_flag=0;
                } else {
                    counter_i++;
                    if (counter_i>=str2_size){
                        red_flag=0;
                    }
                    if (counter_i==str2_size){
                        if (white_flag==1){
                            printf("The second sentence or word is a substring to the first one\n");
                            return 1;
                        }
                    }
                }
            }
        }
    }
    if (white_flag==1){
        printf("The second sentence or word is a substring to the first one\n");
        return 1;
    }
    if (white_flag==0){
        printf("The second sentence or word isn't a substring to the first one\n");
        return 0;
    }
}
}

int similar (char *s, char *t, int n) {
    int counter_s=0; int white_flag=0; int counter_t=0; int life_counter= n;
    
    int size_s= strlen(s); int size_t= strlen(t);
    printf ("%d, %d, %d, %d\n", size_t, size_s, size_t-size_s, n);
    if (size_t>size_s){
        if (size_t-size_s> n){
        printf("The words aren't simmilar by %d letters\n", n);
        return 0;
    }
    }
    if (size_s<size_t){
         if (size_s-size_t> n){
        printf("The words aren't simmilar by %d letters\n", n);
        return 0;
    }       
    }
    else{
        if (size_t>=size_s){
            life_counter= n;
            while (counter_s<size_s){
                if (t[counter_t]==s[counter_s]){
                    counter_s++; counter_t++;
                } else{
                    counter_t++;
                    life_counter--;
                }
            }
        } else{
            life_counter= n;
            while(counter_t<size_t){
                if (s[counter_s]==t[counter_t]){
                    counter_s++;counter_t++;
                } else{
                    counter_s++;
                    life_counter--;
                    if (life_counter<0){
                        break;
                    }
                }
            }
        }
    }
    if (life_counter>=0){
        printf ("The words are simmilars by %d letters\n", n);
        return 1;
    } else {
        printf("The words aren't similar by %d letters\n", n);
        return 0;        
    }
}
int silent_similar (char *s, char *t, int n) {
    int counter_s=0; int white_flag=0; int counter_t=0; int life_counter= n;
    
    int size_s= strlen(s); int size_t= strlen(t);
    if (size_t>size_s){
        if (size_t-size_s> n){
        return 0;
    }
    }
    if (size_s<size_t){
         if (size_s-size_t> n){
        return 0;
    }       
    }
    else{
        if (size_t>=size_s){
            life_counter= n;
            while (counter_s<size_s){
                if (t[counter_t]==s[counter_s]){
                    counter_s++; counter_t++;
                } else{
                    counter_t++;
                    life_counter--;
                }
            }
        } else{
            life_counter= n;
            while(counter_t<size_t){
                if (s[counter_s]==t[counter_t]){
                    counter_s++;counter_t++;
                } else{
                    counter_s++;
                    life_counter--;
                    if (life_counter<0){
                        break;
                    }
                }
            }
        }
    }
    if (life_counter>=0){
        return 1;
    } else {
        return 0;        
    }
}

void print_lines(char *str){
    char temp[LINE];
    printf ("Please enter a word\n");
    gets(temp);
    int size_str= strlen(str); int size_temp= strlen(temp); int countdown= size_temp;
    int progress= 0; int adcance= 0; int sucess=0; int bool=0;
    for (int i=0; i<size_str;i++){
        if (size_str-i>=size_temp){
            if (str[i]== '\n'){
                adcance= i+1;
            } else{
                if (str[i]==temp[0]){
                progress= i; countdown=size_temp;
                for (int j=0; j<size_temp;j++){
                    if (str[progress]==temp[j]){
                        progress++;
                        sucess++;
                        if (sucess==size_temp){
                            int bool=1;
                            printf("\n");
                            while(str[adcance]!='\n'){
                                printf("%c", str[adcance]);
                                adcance++;
                            }
                        }
                    }
                }
            }
        }
            
        }

    }
    if (bool==0){
        printf ("The are no lines with entered words in the text");
    }
}

void print_similar_words(char * str){
     char temp[WORD];
    printf ("Please enter a word\n");
    gets(temp);
    int size_temp= strlen(temp); int size_str= strlen(str);
    int Garrus= 1; int pointer1= 1; int countup=0; int pointer2=0; int reminder=1; int life=2; int pointer3=0; int pointer4=0;
    int pointertmp=0; char TaliZora[WORD]= {0}; int flag=50; int size_Tali= 0; int countdown=0;
    int Normandy[WORD]= {0}; int red_flag= 0;
    for (int i=0; i<size_str;i++){
    if (str[i]== '\n'){
        Normandy[Garrus]=i-1;
        Garrus++;
    }
    if (str[i]== '\t'){
        Normandy[Garrus]= i-1;
        Garrus++;
    }
    }
    while (Normandy[pointer1]!=0){
        pointer1++;
    }
    while (countup!=pointer1){
        countup++;
        for (int z= pointer2; z<=Normandy[countup];z++){
            TaliZora[z]=str[z];
        }
        pointer2= Normandy[countup]+2;
        flag= silent_similar (TaliZora,temp,1);
        if (flag==1){
            red_flag=1;
            for (int f= pointer2; f<=Normandy[countup];f++){
                printf("%c", TaliZora[f]);
        }
        printf("\n");
        }
    }
    if (red_flag==0){
        printf("No word was found as a match");
    }
}


