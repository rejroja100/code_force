#include<stdio.h>
int main(void)
{
    int n,a[101],i,j,even,odd;
    scanf("%d",&n);
    even=0;
    odd=0;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       if(a[i]%2==0)
       {
           even++;
       }
       else
       {
           odd++;
       }
    }
    if(even>odd)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]%2!=0)
            {
                printf("%d\n",j+1);
                break;
            }
        }
    }
    else
    {
        for(j=0;j<n;j++)
        {
            if(a[j]%2==0)
            {
                printf("%d\n",j+1);
                break;
            }
        }
    }


}
