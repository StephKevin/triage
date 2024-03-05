#include <stdio.h>
#include <stdlib.h>

void permuter(int tab[], int i, int j)
{
    int temp;
    temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
}
void tester(int tab[], int i, int j)
{
    if(tab[i]>tab[j])
        {permuter(tab, i, j);}
}
void implementer1( int tab[], int i, int j, int n)
{
    for(j=i+1; j<=n-1; j++)
    {
        tester(tab, i, j);
    }
}
void implementer2(int tab[], int i, int n, int j)
{
    for(i=0;i<n-1; i++)
        {implementer1(tab,i,j,n);}
}
void afficher(int tab[], int n)
{
    int i;
    for(i=0; i<=n-1; i++)
    {
        printf("%d",tab[i]);
        printf("\n");
    }
}
int main()
{
    int *tab;
    int n, i, j;
    printf("entrez la taille du tableau: ");
    scanf("%d",&n);
    printf("entrez les elements du tab:\n");
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&tab[i]);
    }
    printf("tableau non trié:\n");
    afficher(tab, n);
    implementer2(tab,i,n,j);
    printf("tableau trié:\n");
    afficher(tab, n);
    return 0;
}
