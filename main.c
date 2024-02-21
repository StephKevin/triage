#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void triageSimple(int arr[] , int n)
{
    int i , j , temp;
    for (i=0;i<n-1; i++)
    {
        for(j=i+1; j<=n-1; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            else{}
        }
    }
}
void affichage(int arr[], int n)
{
    int i;
    for(i=0; i<=n-1; i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
}
int main()
{
    int *arr;
    int n, i;
    printf("entrez la taille du tableau: ");
    scanf("%d",&n);
    printf("entrez les elements du tab:\n");
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("tableau non trié:\n");
    affichage(arr, n);
    triageSimple(arr, n);
    printf("tableau trié:\n");
    affichage(arr, n);
    return 0;
}
