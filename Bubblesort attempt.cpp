#include <stdio.h>
//Lavet og produceret af Patric Tindø-Jennings S203071

int main() {


//input 1:
   int varer = 0;
   scanf("%d",&varer);
//input 2:
    double pris[varer+1];
    for (int i = 1; i < varer+1; ++i) {
        scanf("%lf", &pris[i]);
    }
//bubblesort faldende:
    double temp;
    for (int pass = 2; pass < varer+1; ++pass) // da der hele tiden skal undersøges om mindste står først skal der gennemløbes en ydre løkke for hver
    {
        for (int i = 1; i < varer; i++)
        {
            if (pris[i] < pris[i + 1]) // hvis nummeret er mindre end det næste så skal der byttes om
            {
                temp = pris[i]; // det element der skal flyttes op gemmes temporært - så oprindelige kan overskrives med det er større
                pris[i] = pris[i + 1];
                pris[i + 1] = temp; // det gemte temporære element sættes så ind på indeks +1 pladsen
            }
        }
    }

// Print sorteret array:
/*
    for (int i = 1; i < varer+1; ++i) {
        printf("%lf\n", pris[i]);
    }
*/



//Rabatsamling:
    int samlet = 0;
    for (int i = 1; i < varer+1; ++i) {
        if (i%3==0){
            samlet = samlet + pris[i];
        }
    }

//output:
    printf("%d", samlet);
}
