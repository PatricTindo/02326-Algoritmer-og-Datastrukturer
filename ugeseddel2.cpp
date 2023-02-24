#include <stdio.h>
#include <stdlib.h>

static long int Stones(int A[], int n, int j);

int main() {
    int W = 0;
    int MaxW = 0;

    scanf("%d", &W);
    scanf("%d", &MaxW);

    int arr[W];
    for (int i = 0; i < W; ++i) {
        scanf("%", &arr[i]);
    }

    long int max = Stones(arr, sizeof(arr), MaxW);
    printf("%d", max);
}


static long int Stones(int A[],int n, int j){
    long int Max = 0;
    int counter=0;
    for (int i = 0; Max < j; ++i) {
        Max += A[i];
        counter++;
    }

    return counter;
}


