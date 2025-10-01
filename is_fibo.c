#include <stdio.h>
int main()
{
    int T,num1, num2, next_term,num;
    scanf("%d",&T);
    int R[T];
    for(int i=0;i<T;i++)
    {
        R[i]=0;
    }
    for(int i =1; i<=T;i++)
    {
        num1 =0;
        num2=1;
        next_term =1;
        scanf("%d",&num);
        if((num == 1) || (num == 0))
        {
            R[i-1]=1;
        }
        while(next_term < num)
        {
            next_term = num1+num2;
            num1 = num2;
            num2 = next_term;
            if(num==next_term)
            {
                R[i-1]=1;
            }
        }
    }
    for(int i=0;i<T;i++)
    {
        if(R[i]==1)
                printf("isFibo\n");
        else if(R[i]==0)
                printf("isNotFibo\n");
    }
}