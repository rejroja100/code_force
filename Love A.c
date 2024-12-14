#include <stdio.h>

int main() {

        char str[55];
        scanf("%s", str);

        int count = 0, i = 0, flag = 0;

        while(str[i] != '\0'){

            if(str[i] == 'a') count++;
            else flag = 1;
            i++;
        }

        if(flag == 1) printf("%d\n", count + 1);
        else printf("%d\n", count);


    return 0;
}

