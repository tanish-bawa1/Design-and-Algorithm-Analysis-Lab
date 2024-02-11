#include <stdio.h>
int towerofhanoi(int n, char from, char to, char aux)
{
    if(n==1)
    {
        printf("Disc is moved from %c to %c\n",from,to);
    }
    else
    {

    
    printf("Disc is moved from %c to %c\n",from,aux);
    towerofhanoi(n-1,from,aux,to);
    }
    return 0;
}
int main()
{
    int i;
    printf("Enter the number of discs:");
    scanf("%d",&i);
    towerofhanoi(i,'a','b','c');
}