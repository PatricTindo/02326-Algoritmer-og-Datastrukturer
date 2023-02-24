//biblioteker:
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
//prototyper:
void heap(double pris[], int varer, int i);
void HeapSortering(double pris[], int varer);

int main()
{
//input 1:
    int varer = 0;
    scanf("%d",&varer);
//input 2:
    double pris[varer];
    for (int i = 0; i < varer; ++i) {
        scanf("%lf", &pris[i]);
    }

    HeapSortering(pris, varer);
    //Rabatsamling:
    int samlet = 0;
    for (int i = 2; i < varer; i=i+3) { // start på 3. plads i arrayet, og inkrementer med 3 for hver gang, og undgå derfor at gennemgå alle tallene igen.
        samlet = samlet + pris[i];
    }
//output:
    printf("%d", samlet);
}

void heap(double pris[], int varer, int i)
{
    int mindst = i; //Mindste som rod
    int venstre = 2 * i + 1; // venstre = 2*i + 1
    int højre = 2 * i + 2; // højre = 2*i + 2

    if (venstre < varer && pris[venstre] < pris[mindst]){ // Hvis venstre er mindre end rod:
        mindst = venstre;
    }
    if (højre < varer && pris[højre] < pris[mindst]){// Hvis højre er mindre end rod:
        mindst = højre;
    }
    if (mindst != i) { // Hvis mindst ikke er rod
        swap(pris[i], pris[mindst]); // swap dem!
        heap(pris, varer, mindst); // Kald heap rekursivt til mindst er rod.
    }

}

void HeapSortering(double pris[], int varer)
{
    // Rearranger array, (byg heap)
    for (int i = varer / 2 - 1; i >= 0; i--)
        heap(pris, varer, i);

    // tag element ét efter ét
    for (int i = varer - 1; i >= 0; i--) {
        //ryk roden til endnen
        swap(pris[0], pris[i]);

        //reducer heap
        heap(pris, i, 0);
    }
}