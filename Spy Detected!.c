#include<stdio.h>
int main()
{
    int t,n,i,j,count=0;
    int a[101];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        if(a[0] != a[1] && a[0] != a[2])
        {
            count = 0;

        }
        else
        {
          for(j=1;j<n;j++)
            {
              if(a[0] != a[j])
              {
                count=j;
                break;
              }

            }
        }
        printf("%d\n",count+1);
    }

    return 0;
}
