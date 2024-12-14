#include<stdio.h>
int main()
{
    char name[200];
    scanf("%s", name);
    int count = 0;

    for(int i = 0; name[i] != '\0'; i++){

        int flag = 0;
        for(int j = 0; j < i; j++){
            if(name[i] == name[j]){

                flag = 1;
                break;
            }
        }

        if(flag == 0){
            count++;
        }
    }

    if(count % 2 == 0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }

    return 0;
}
