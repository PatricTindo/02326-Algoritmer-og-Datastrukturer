#include <stdio.h>

int main() {
    int varer = 0;
    scanf("%d",&varer);
    double pris[varer];
    double temp;

    for (int i = 1; i < varer+1; ++i) {
        scanf("%lf", &pris[i]);
    }
    for (int pass = 2; pass < varer+1; ++pass)
    {
        for (int i = 1; i < varer; i++)
        {
            if (pris[i] < pris[i + 1])
            {
                temp = pris[i];
                pris[i] = pris[i + 1];
                pris[i + 1] = temp;
            }
        }
    }
    int samlet = 0;
    for (int i = 1; i < varer+1; ++i) {
        if (i%3==0){
            samlet = samlet + pris[i];
        }
    }
    printf("%d", samlet);
}
