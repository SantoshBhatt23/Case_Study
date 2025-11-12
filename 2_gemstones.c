#include <stdio.h>
#include <string.h>
int main()
{
    int n,gemCount=0,isdup,inStone;
    scanf("%d",&n);
    fflush(stdin);
    char stones[n][101];
    for(int i = 0 ; i<n ; i++)
    {
        fgets(stones[i],101,stdin);
        stones[i][strcspn(stones[i],"\n")] = '\0';
    }
    //now we will use element of first stones one by one and match if they occur in all stones or not.(i.e inStones = n)
    for(int i = 0 ; stones[0][i] != '\0' ; i++)
    {
        char element = stones[0][i];
        isdup =0; //resetting the duplicate status in each iteration.
        inStone = 1; //to keep a track of no of stones in which the element occurs(resetting it to 1 everytime)
        //now to know whether the element alos occur ahead, if yes then for current turn we will skip checking freq for it.
        for(int j = i+1 ; stones[0][j] != '\0'; j++)
        {
            if(element == stones[1][j]){
                isdup = 1;
                break;
            }      
        }
        if(isdup == 1) continue;
        //now if the element does not occur ahead in the list , then count the no of stones in which it occurs.
        for(int j = 1 ; j<n ; j++)
        {
            for(int k = 0; stones[j][k]!='\0'; k++)
            {
                if(stones[j][k]==element)
                {
                    inStone++;
                    break;
                }
            }
        }
        if(inStone == n)
        {
            gemCount++;
        }
    }
    printf("%d",gemCount);
}