
#include<stdio.h>
int main(){
    int a[]={21,52,78,41,23,15,44,12,95,89};
    int n,i;
    printf("Insertion Sort In Ascending Order\n");
    insertionSortAsc(a,n);
        for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}


int insertionSortAsc(int A[],int n){
    int i,j,temp;

    for(i=0; i<n; i++){
        temp=A[i];
        j=i-1;
        while(temp<A[j] && j>=0){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
    }
   // display(B,n);
}
