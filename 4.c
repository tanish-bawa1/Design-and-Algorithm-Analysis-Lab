#include <stdio.h>
#include <stdlib.h>
int i,j,k;
void mul(int a[x][y],int b[y][z],int c[x][z],x,y,z)
{
    for(i=0;i<x;i++)
    {
        for(j=0;j<z;j++)
        {
            c[i][j]=0;
            for(k=0;k<y;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
}
int main()
{
    int x,y,z,a,p,q,i,j,k;
    printf("Enter the numbers of rows you want in the array1:");
    scanf("%d",&x);
    printf("Enter the numbers of columns you want in the array1:");
    scanf("%d",&y);
    long int arr1[x][y];
    printf("Enter the numbers of columns you want in the array2:");
    scanf("%d",&z);
    long int arr2[y][z];
    long int arr3[x][z];
    printf("If you want to get a random array for array 1 enter 1 else 0:");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Enter the min limit for random array:");
        scanf("%d",&p);
        printf("Enter the max limit for random array:");
        scanf("%d",&q);
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                arr1[i][j]=rand()%(q-p+1)+p;
            }
        }
    }
    else
    {
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                scanf("%d",&arr1[i][j]);
            }
        }
    }
    printf("If you want to get a random array for array 2 enter 1 else 0:");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Enter the min limit for random array:");
        scanf("%d",&p);
        printf("Enter the max limit for random array:");
        scanf("%d",&q);
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                arr2[i][j]=rand()%(q-p+1)+p;;
            }
        }
    }
    else
    {
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                scanf("%d",&arr2[i][j]);
            }
        }
    }
    printf("Array 1 is\n");
    for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                printf("%d  ",arr1[i][j]);
            }
            printf("\n");
        }
    printf("Array 2 is\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d  ",arr2[i][j]);
        }
        printf("\n");
    }
    mul(arr1,arr2,arr3,x,y,z);
    printf("Array 3 is\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<z;j++)
        {
            printf("%d  ",arr3[i][j]);
        }
        printf("\n");
    }

}