#include <stdio.h>
int main()
{
    int num1 = 0 , num2 = 1, n , next_term, sum =0;
    printf("please enter the no of terms : ");
    scanf("%d",&n);
    int F[n];
    for(int i = 0; i<=(n-1);i++)
    {   
        if(i==0)
            F[0]=0;
        if(i==1)
            F[1]=1;
        if(i>1)
        {
            next_term = num1 + num2;
            F[i]= next_term;
            num1 = num2;
            num2 = next_term;
        }
    }
    for(int i=0 ; i< n ;i++)
    {
        sum+=F[i];
        printf("%d\t",F[i]);
    }
    printf("\n");
    for(int i=(n-1);i>=0;i--)
    {
        printf("%d\t",F[i]);
    }
    printf("\n");
    printf("sum =%d\n",sum);

}