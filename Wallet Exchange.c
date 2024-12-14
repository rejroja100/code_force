#include<stdio.h>
int main ()
{
    int i,t,a,b,step;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        step=a+b;
        if(step%2==0)
            printf("Bob\n");
        else
            printf("Alice\n");
    }


    return 0;
}
