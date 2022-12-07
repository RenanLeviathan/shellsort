#ifndef SHELLSORT_H
#define SHELLSORT_H
#include <stdio.h>
#include <stdlib.h>
int tempo = 0;

void troca(int A[], int a, int b){
    int aux = A[a];
    A[a] = A[b];
    A[b] = aux;
}
void shellsort(int A[], int n){
    int h = n-1;
    tempo++;
    while(h>0){
        for(int i=0;i+h<n;i++){
            if(A[i] > A[i+h]){
                troca(A, i, i+h);
                tempo++;
            }
        }
        h = h / 2;
        tempo++;
    }
}

int custo(){
    return tempo;
}
#endif