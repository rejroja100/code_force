#include <stdio.h>
#include<string.h>
int main()
{
    char str[100], word[100], str2[100];
    scanf("%s", str);
    scanf("%s", str2);
    int len = strlen(str), j, i;



        for(int i = 0, j = len -1 ; i < len; i++, j--){

            word[j] = str[i];
        }
            word[len] = '\0';


    if(strcmp(word, str2)== 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


    return 0;
}
