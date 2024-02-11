#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<time.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selectionsort(int arr[MAX_WORDS],int n)
{
    int i,j,min_index;
    for(i=0;i<n-1;j++)
    {
        min_index=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        if(min_index!=i)
        {
            swap(&arr[i],arr[min_index]);
        }
    }
}
int partition(int arr[MAX_WORDS],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
        swap(&arr[i+1],&arr[high]);
        return i+1;
    }
}
void quicksort(int arr[MAX_WORDS],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
void insertionsort(int arr[MAX_WORDS],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
    }
}
void heapify(int arr[MAX_WORDS],int n,int i)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+1;
    if(left<n&&arr[left]>arr[largest])
    {
        largest=left;
    }
    if(right<n&&arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[MAX_WORDS],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    for(i=n-1;i>=0;i--)
    {
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}
void insertionsort(int arr[MAX_WORDS],int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
    }
    while(j>=0&&arr[j+1]>key)
    {
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
}
int main()
{
    int i=0;
    global int MAX_WORDS;
    FILE *t;
    t=fopen("number.txt","r+");
    int num;
    while((fscanf(t,"%d",&num))==1)
    
    fclose(t);
}