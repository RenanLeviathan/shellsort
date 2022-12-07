#include <stdio.h>
#include <stdlib.h>
#define SUCCESS 0
#define MAX 90
#include "shellsort.h"

void exibir(int A[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}
int main(){
    int n;
    int A[MAX];
    FILE *fp;
    if((fp=fopen("vetor.txt","r"))==NULL){
        printf("Não foi possível abrir o arquivo");
        return 1;
    }else{
        int i=0;
        fscanf(fp, "%d", &n);
        for(int i=0;i<n;i++){
            fscanf(fp, "%d", &A[i]);
        }
        printf("\n");
        exibir(A,n);
        printf("\n");
        shellsort(A, n);
        exibir(A,n);
        printf("\nCusto do algoritmo: %d", custo());
    }
    fclose(fp);
    return SUCCESS;
}