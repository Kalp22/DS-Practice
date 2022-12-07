#include<stdio.h>
int merge_sort(int *A,int i)
{
        
}
int partition(int *A,int i);
{
    int pivot=A[0],j,temp;
    j=4;
    i=0;
    while(i<j)
    {
        do
        {
            i++;
            
        }
        while(A[i]<=pivot);
        do
        {
            j--;
        }
        while(A[j]>pivot);
        if(i<j){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    return 0;
}
int quick_sort(int *A,int i)
{
    
    
}
int main()
{
    int A[5],i,key;
    printf("Enter the Array Elements\n");
    for(i=0;i<5;i++){
        scanf("%d",A);
    }
    printf("\nWhich sort do you want to perform\n");
    printf("Press 1 to do Merge Sort\n");
    printf("Press 2 to do Quick Sort\n");
    scanf("%d",&key);
    if(key==1)
        merge_sort(A,i);
    else if(key==2){
        partition(A,i);
        quick_sort(A,i);
    }
    else
        printf("Please enter a Valid input");
    return 0;
}
