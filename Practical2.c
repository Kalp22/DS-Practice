#include <stdio.h>
int selection(int *A,int i){
    int min,j,temp;
    for(i=0;i<4;i++){
        min=i;
        for(j=i+1;j<5;j++)
            if(A[j]<A[min])
                min=j;
        if(min!=i){
            temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }
    }
    return 0;
}
int insertion(int *A,int i){
    int j,k;
    for(i=1;i<5;i++){
        for(j=0;j<i;j++){
                if(A[i]<A[j]){
                    k=A[i];
                    A[i]=A[j];
                    A[j]=k;
            }
        }
    }
    return 0;
}
int bubble(int *A,int i){
    int t,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(A[j]>A[j+1]){
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
        
    }
    return 0;
}
int main() {
    int A[5],i,key,Arr;
    printf("Enter the Array Elements\n");
    for(i=0;i<5;i++){
        scanf("%d",&A[i]);
    }
    printf("\nWhich sort do you want to Perform?\n");
    printf("Press 1 to do Bubble sort\n");
    printf("Press 2 to do Selection sort\n");
    printf("Press 3 to do Insertion sort\n");
    scanf("%d",&key);
    if(key==2){
        selection(A,i);
        for(i=0;i<5;i++)
            printf("\n%d",A[i]);
    }
    else if(key==3){
        insertion(A,i);
        for(i=0;i<5;i++)
            printf("\n%d",A[i]);
    }    
    else if(key==1){
        bubble(A,i);
        for(i=0;i<5;i++)
            printf("\n%d",A[i]);
    }
    else
        printf("\nPlease Enter a Valid Input");
    return 0;
}
