//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main()
{
    
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    // count digits
    int count=0,t1=num;
    while(t1>0)
    {
        count++;
        t1=t1/10;
    }   

    int r=0,sum=0,t=num;
    while(t>0)
    {
        r=t%10;
        sum=sum+pow(r,count);
        t=t/10;
    }
    if (sum==num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
        
    return 0;
}