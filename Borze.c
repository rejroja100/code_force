#include<stdio.h>
#include<string.h>

int main()
{
    char str[202];
    scanf("%s", str);

        int len = strlen(str);

    for(int i = 0; i < len ; ){

        if(str[i] == '.'){
            printf("0");
            i++;
        }
        else if(str[i] == '-' && str[i + 1] == '.'){
            printf("1");
            i = i + 2;
        }
        else if(str[i] == '-' && str[i + 1] == '-'){
            printf("2");
            i = i + 2;
        }
    }
    return 0;
}
