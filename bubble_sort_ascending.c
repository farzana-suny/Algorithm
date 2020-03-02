
#include <stdio.h>

int main(){
    int n,i;
    int A[10] = {10,63,55,12,8,65,47,5,79,30};
    printf("Bubble Sort In Ascending Order\n");
    bubbleSortAsc(A,n);
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    return 0;
}
void bubbleSortAsc(int A[], int n)
{
    int i, j,temp;
    for (i=0; i<n-1; i++){
        for (j=0; j<n-i-1; j++){
            if (A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

