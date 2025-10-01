#include <stdio.h>
int main()
{
    int T, num, d,temp,count;
    printf("enter the number of test cases\n");
    scanf("%d",&T);
    int A[T];
    for(int i = 1; i<=T;i++)
    {
        count = 0;
        scanf("%d",&num);
        temp = num;
        while(temp!=0)
        {
            d = temp % 10;
            if (num % d ==0)
                count += 1;
            temp/=10;
        }
        A[i-1]=count;
    }
    for(int i = 0;i<T;i++)
    {
        printf("%d\n",A[i]);
    }
}