#include<stdio.h>

void chushihua(int *a, int n);
void yichu(int *a,int x,int y);
void output(int *a,int n);
void action();
int main()
{   
    action();
    return 0;
}
void action()
{
    int n,h;
    int x,y;
    int a[10000];
    while(scanf("%d %d",&n,&h)!= EOF)
    {
        chushihua(a,n);
        for (int i=0;i<h;i++)
        {
            scanf("%d %d",&x,&y);
            yichu(a,x,y);
        }
        output(a,n);
    }
    return;
}

void chushihua(int *a, int n)
{
    for(int i=0;i<=n;i++)
    {
        a[i]=1;
    }
    return ;
}
void yichu(int *a,int x,int y)
{
    for(int i=x;i<=y;i++)
    {
        a[i]=0;
    }
    return ;
}
void output(int *a,int n)
{
    int sum = 0;
    for(int i = 0;i<=n;i++)
    {
        if(a[i]==1)
            sum++;
    }
    printf("%d\n",sum);
    return ;
}
