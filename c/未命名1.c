#include<stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int a[n],max= 0;
   for(int i=0;i<n;i++)
   {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max = a[i];
        }
   }
   int count = 0;
   for(int j=0;j<=max;j++)
   {
        count = 0;
        for(int i = 0;i<n;i++)
        {
            if(j==a[i])
            {
                count++;
            }
        }
        printf("%d\n",count);
   }
}
