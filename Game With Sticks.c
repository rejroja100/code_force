#include<stdio.h>

int even(int x){
    if(x % 2 == 0) return 1;
    else return 0;
}

int main()
{
    int n, m, min = 0 ; scanf("%d%d", &n, &m);

    min = n;
    if(m < min) min = m;

    if(even(min)) printf("Malvika\n");
    else printf("Akshat\n");

   return 0;
}
