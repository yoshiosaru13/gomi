#include <stdio.h>
void check_heap(int heap[], int n)
{
    int c=1;
    for(int i=1; (2*i+1)<=n || (2*i)<=n; i++){
        if(heap[i] > heap[i*2] || heap[i] > heap[i*2+1]){
            c=0;
        }
    }
    printf("%d\n",c);
    return;
}

int main(int argc, char **argv)
{
    int n = 11;

    
    int heap[] = {0, 1, 5, 3, 12, 6, 4, 9, 15, 14, 8, 11};

    
    //int heap[] = {0, 1, 5, 3, 12, 8, 4, 9, 15, 14, 6, 11};

    check_heap(heap, n);

    return 0;
}