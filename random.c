#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int i,x;
    FILE *t;
    t=fopen("D:\\Design and Algorithm Analysis\\number.txt","r+");
    for(i=0;i<100;i++)
    {
        x=rand()%1000 +1;
        fprintf(t,"%d ",x);
        printf("%d ",x);
    }
    fclose(t);
    return 0;
}