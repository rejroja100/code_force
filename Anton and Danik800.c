#include<stdio.h>
int main()
{
    int t, counta = 0, countd = 0;
    scanf("%d", &t);

    char str[t];
    scanf("%s", str);





    for(int i =0; i < t; i++){

        if(str[i] == 'A') counta++;
        if(str[i] == 'D') countd++;
    }





    if(counta > countd) printf("Anton\n");
    else if(countd > counta) printf("Danik\n");
    else printf("Friendship\n");



    return 0;
}
