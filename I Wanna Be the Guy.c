#include<stdio.h>
int main()
{

    int i,j,n,p,y,a[200],temp,count=0;
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&y);
    for(i=p;i<p+y;i++)
    {
        scanf("%d",&a[i]);
    }

      for( i=0;i<p+y;i++)
    {
        for( j=i+1;j<p+y;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }


        }
    }
    for(int i=0;i<p+y;i++){

           if(a[i]!=a[i+1])
            count++;

        }

     if(count>=n)
        printf("I become the guy.");
       else
        printf("Oh, my keyboard!");

    return 0;
}
