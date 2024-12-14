#include<stdio.h>
#include<string.h>
int main()
{
    char str1[102], str2[102], str3[102];

    scanf("%s", str1);
    scanf("%s", str2);
    int i = 0;

    for(i = 0; str1[i] != '\0'; i++){
        if(str1[i] != str2[i]){
            str3[i] = '1';
        }
        else str3[i] = '0';
    }
    str3[i] = '\0';

    printf("%s\n", str3);


    return 0;
}
