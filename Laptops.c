#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a!=b){
            printf("Happy Alex");
            return 0;
        }
    }
        printf("Poor Alex");
    return 0;
}
