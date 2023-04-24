
#include <stdio.h>
#define N 8
 
// 配列の全ての要素を出力する
void printArray(int A[], int n) {
    for (int i = 0; i < n; i++)
        if (i == 0)
            printf("%d", A[i]);
        else
            printf(" %d", A[i]);
 
    printf("\n");
}
 
// 配列をマージ（統合）する関数
void merge(int A[], int left, int mid, int right) {
    int n1 = mid - left;    // 左側の配列の要素数
    int n2 = right - mid;   // 右側の配列の要素数
    int L[n1], R[n2];       // 分割した配列をコピーする配列
    int i, j, k;
 
    // 対象の配列を二分割する
    for (i = 0; i < n1; i++)
        L[i] = A[left + i];
    for (i = 0; i < n2; i++)
        R[i] = A[mid + i];
 
    // 2つの配列の添え字を初期化
    i = 0, j = 0;
 
    // ２つの配列から最小値を元の配列へと代入していく
    for (k = left; k < right; k++) {
        // 小さい値から順番に、元の配列へと代入する
        if (L[i] <= R[j] && i < n1)
            A[k] = L[i++];
        else
            A[k] = R[j++];
    }
}
 
// マージソート
void mergeSort(int A[], int left, int right) {
    // 分割した配列の要素数が1個以下になるまで繰り返す
    if (left+1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);     // 右側の配列にmergeSortを適用する
        mergeSort(A, mid, right);    // 右側の配列にmergeSortを適用する
        merge(A, left, mid, right);  // マージを行う
    }
}
 
int main(void) {
    int A[N] = {4, 2, 8, 1, 7, 3, 9, 6};
 
    printArray(A, N);
    mergeSort(A, 0, N); // マージソートを行う
    printArray(A, N);
 
    return 0;
}