#include <stdio.h>
#include<string.h>

void lower_case(char word[], int len) {
        for (int i = 0; i < len; i++) {
        if(word[i] >= 'A' && word[i] <= 'Z'){
        printf("%c", word[i] + 32);
        }
        else{
           printf("%c", word[i]);
        }

    }
}

void upper_case(char word[], int len){
    for(int i = 0; i < len; i++){

        if(word[i] >= 'a' && word[i] <= 'z'){
        printf("%c", word[i] - 32);
        }
        else{
           printf("%c", word[i]);
        }
    }
}

int main() {
    char word[100];
    scanf("%s", word);

    int len = strlen(word);
    int countA = 0, counta = 0;


    for(int i = 0; i < len; i++){

        if(word[i] >= 'A' && word[i] <= 'Z'){
            countA++;
        }
        if(word[i] >= 'a' && word[i] <= 'z'){
            counta++;
        }
    }


          if(countA > counta){

            upper_case(word, len);
          }
          else if(countA < counta){
            lower_case(word, len);
          }
          else{
            lower_case(word, len);
          }

    return 0;
}
