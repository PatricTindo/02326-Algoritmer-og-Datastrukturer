
// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;

// To heap a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void swap2 (double arr[], double arr2[]){
    double *temp;
    temp = arr;
    arr=arr2;
    arr2=temp;

}
void heap(double arr[], int n, int i)
{
    int smallest = i; // Initialize smallest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is smaller than root
    if (l < varer && pris[l] < pris[smallest])
        smallest = l;

    // If right child is smaller than smallest so far
    if (r < varer && pris[r] < pris[smallest])
        smallest = r;

    // If smallest is not root
    if (smallest != i) {
        swap2(&pris[i], &pris[smallest]);

        // Recursively heap the affected sub-tree
        heap(pris, varer, smallest);
    }
}

// main function to do heap sort
void HeapSortering(double arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = varer / 2 - 1; i >= 0; i--)
        heap(pris, varer, i);

    // One by one extract an element from heap
    for (int i = varer - 1; i >= 0; i--) {
        // Move current root to end
        swap2(&pris[0], &pris[i]);

        // call min heap on the reduced heap
        heap(pris, i, 0);
    }
}

int main()
{
//input 1:
    int varer = 0;
    scanf("%d",&varer);
//input 2:
    double pris[varer+1];
    for (int i = 0; i < varer; ++i) {
        scanf("%lf", &pris[i]);
    }

    HeapSortering(pris, varer);


    //Rabatsamling:
    int samlet = 0;
    for (int i = 2; i < varer; i=i+3) { // start på 3 plads i arrayet, og inkrementer med 3 for hver gang.
        samlet = samlet + pris[i];
    }

//output:
    printf("%d", samlet);
}