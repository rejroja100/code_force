#include<stdio.h>
int main()
{
    int n, i, j, count = 0;
    scanf("%d", &n);

    char str[n];
    scanf("%s", str);


        for(i = 0, j = 1; i < n-1; i++, j++){
            if(str[j] == str[i]){
                 count++;
            }
        }

    printf("%d", count);

    return 0;

}
