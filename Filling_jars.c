#include <stdio.h>
int main()
{
    int N,M,a,b,k,sum=0;
    float avg;
    printf("enter the value of N and M\n");
    scanf("%d%d",&N,&M);
    for(int i = 1;i<=M;i++)
    {
        printf("enter the value of a,b,k\n");
        scanf("%d%d%d",&a,&b,&k);
        sum += (b-a+1)*k;
    }
    avg = (1.0*sum)/N;
    printf("%.2f",avg);
}
