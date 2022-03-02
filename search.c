#include<stdio.h>
void linsearch(int a[],int n,int num)
{
    int c=0,i;
    for(i=0;i<n;i++)
    {
       if(a[i]==num)
       {printf("found %d",i);c++; break;
       }
    }if(c==0)
    printf("not found %d",i);
}
int main()
{
    int n,a[10],z;
    printf("Enter the no of samples =");
    scanf("%d",&z);

    while(z>0)
    {
    int num;
    printf("Enter the size =");
    scanf("%d",&n);
    printf("Enter the elements =");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Enter the no to search =");
    scanf("%d",&num);
    linsearch(a,n,num);

    z--;
    }
}
