#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int i;
    FILE *t;
    t=fopen("D:\\Design and Algorithm Analysis\\number.txt","r+");
    int num;
    while((fscanf(t,"%d",&num))==1)
    printf("%d ",num);
    fclose(t);
    return 0;
}