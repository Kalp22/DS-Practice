#include<stdio.h>

int mergesort(int A[],int s,int e){
    if(s<e){
        int m=s+(e-s)/2;
        mergesort(A,s,m);
        mergesort(A,m+1,e);
        merge(A,s,m,e);
    }
}
int merge(int A[],int s,int m,int e){
    int i,j,k;
    int x=m-s+1,y=e-m;
    int A1[x],A2[y];
    for(i=0;i<x;i++){
        A1[i]=A[s+i];
    }
    for(j=0;j<y;j++){
        A2[j]=A[m+1+j];
    }
    i=0;
    j=0;
    k=s;
    while (i < x && j < y) {
        if (A1[i] <= A2[j]) {
            A[k] = A1[i];
            i++;
        }
        else {
            A[k] = A2[j];
            j++;
        }
        k++;
    }
    while(i<x){
        A[k]=A1[i];
        k++;
        i++;
    }
    while(j<y){
        A[k]=A2[j];
        j++;
        k++;
    }
}
int main()
{
    int n;
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    int A[n],i,key,e=0;
    printf("Enter the Array Elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        e++;
    }
    printf("\nWhich sort do you want to perform\n");
    printf("Press 1 to do Merge Sort\n");
    printf("Press 2 to do Quick Sort\n");
    scanf("%d",&key);
    if(key==1)
        mergesort(A,0,e);
    // else if(key==2){
        // partition(A,i);
        // quick_sort(A,i);
    // }
    else
        printf("Please enter a Valid input");
    for(i=0;i<n;i++)
        printf("%d",A[i]);
    return 0;
}
