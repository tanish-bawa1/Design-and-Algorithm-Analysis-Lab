#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int i,x;
    printf("Enter the number of random numbers you want in text file:");
    scanf("%d",&x);
    FILE *t;
    t=fopen("number.txt","r+");
    for(i=0;i<x;i++)
    {
        fprintf(t,"%d ",rand()%1000 +1);
    }
    fclose(t);
    return 0;
}