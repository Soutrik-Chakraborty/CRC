#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,num1,num2;
    do{
        scanf("%d",&n);
    }while(!(n>=2 && n<=16));
    int data[20];
    scanf("%d",&num1);
    i=n-1;
    while(num1!=0)
    {
        data[i--]=num1%10;
        num1=num1/10;
    }
    int m;
    do{
        scanf("%d",&m);
    }while(!(m>=1 && m<=6));
    int div[m];
    scanf("%d",&num2);
    i=m-1;
    while(num2!=0)
    {
        div[i--]=num2%10;
        num2=num2/10;
    }
    for(i=n;i<n+m-1;i++)
        data[i]=0;
    int sub[m];
    for(i=0;i<n;i++)
    {
        k=0;
        if(data[i]==1)
        {
            for(j=i;j<i+m;j++)
                data[j]=data[j]^div[k++];
        }
        else
        {
            for(j=i;j<i+m;j++)
                data[j]=data[j]^0;
        }
    }
    for(i=n;i<n+m-1;i++)
        printf("%d",data[i]);
    return 0;
}
