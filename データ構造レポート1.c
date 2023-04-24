#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define N 8
void swap(int* a, int* b);
void insertionsort(int a[],int n);
void bubblesort(int a[],int n);
void merge(int A[], int left, int mid, int right);
void mergeSort(int A[], int left, int right);

int main(){
    int a[8] = {3, 12, 8, 4, 15, 6, 11, 25};
    insertionsort(a,8);
    /*for(int i=0;i<7;i++){
        printf("%d ",a[i]);
    }
    printf("%d\n",a[7]);*/

    int b[8] = {3, 12, 8, 4, 15, 6, 11, 25};
    bubblesort(b,8);
    /*for(int i=0;i<7;i++){
        printf("%d ",b[i]);
    }
    printf("%d\n",b[7]);*/
    
    int c[8] = {3, 12, 8, 4, 15, 6, 11, 25};
    mergeSort(c,0,N);
    /*for(int i=0;i<7;i++){
        printf("%d ",b[i]);
    }
    printf("%d\n",b[7]);*/

}


void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void insertionsort(int a[],int n){
    for(int i=2;i<n;i++){
        int temp = a[i];
        int j = i; 
        while(j>1 && a[j-1] > temp){
            a[j] = a[j-1];
            j--;
        }
        a[j] = temp;
    }
}

void bubblesort(int a[],int n){
    int j = n;
    bool sorted;
    do{
        j = j-1;
        sorted = true;
        for(int i=0;i<j;i++){
            if(a[i] > a[i+1]){
                swap(&a[i],&a[i+1]);
                sorted = false;
                for(int i=0;i<7;i++){
        printf("%d ",a[i]);
    }
    printf("%d\n",a[7]);
            }
        }
        for(int i=0;i<7;i++){
        printf("%d ",a[i]);
    }
    printf("%d\n",a[7]);
        
    }while (!sorted);
}
void merge(int A[], int left, int mid, int right) {
    int n1 = mid - left;   
    int n2 = right - mid;  
    int L[n1], R[n2];      
    int i, j, k;

   
    for (i = 0; i < n1; i++)
        L[i] = A[left + i];
    for (i = 0; i < n2; i++)
        R[i] = A[mid + i];

    
    i = 0, j = 0;

    
    for (k = left; k < right; k++) {
       
        if (L[i] <= R[j] && i < n1)
            A[k] = L[i++];
        else
            A[k] = R[j++];
    }
}
void mergeSort(int A[], int left, int right) {
    
    if (left+1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);     
        mergeSort(A, mid, right);    
        merge(A, left, mid, right); 
    }
}