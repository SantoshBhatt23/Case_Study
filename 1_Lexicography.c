#include <stdio.h>
#include <string.h>
void printLexico(char str[])
{
    int len = strlen(str);
    int pivot,flag = 0; //flag is the boolean variable for whether lexicographically greater exists or not.
    char temp;
    //step1 : finding pivot,
    for(int i = len-2 ; i>=0 ;i--)
    {
        if(str[i]<str[i+1])
        {
            pivot = i;
            flag = 1;
            break;
        }
        
    }
    if(flag==0){
        printf("No answer\n");
        return;
    }
    //finding smallest char greater than str[pivot] in substring ahead of pivot;and swap
    for(int j = len-1; j>pivot ; j--)
    {
        if(str[pivot]<str[j])
        {
            temp = str[pivot];
            str[pivot] = str[j];
            str[j] = temp;
            break;
        }
    }
    //reverse the string ahead of pivot.
    int start = pivot+1;
    int end = len-1;
    for(int c=1; c<=(end-pivot)/2;c++,start++,end--)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp; 
    }
    //now print the string:
    printf("%s",str);

}
int main()
{
    //first taking a word
    char str[101];
    fgets(str,101,stdin);
    fflush(stdin);
    //printing lexicographically gr8r
    printLexico(str);
}