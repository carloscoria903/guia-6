#include <stdio.h>
#include <stdlib.h>
void pedirMatriz(int matriz[][200], int n);
void ordenar(int matriz[][200], int n);
int main(){
    int n;
    printf("ingrese el tamaño de la matriz ");
    scanf("%d", &n);
    int matriz [200][200];
    pedirMatriz(matriz, n);
    ordenar(matriz, n);
    return 0;
}
void pedirMatriz(int matriz [] [200], int n){
 printf("ingrese los numeros de la matriz \n");
 for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        printf("posicion [%d] [%d] ", i, j);
        scanf("%d", &matriz[i] [j]);
    }
 }
 printf("la matriz ingresada es \n");
 for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
 }
}
void diagonal(int matriz[][200], int n){

}

void triangulo(int matriz[][200], int n){

}

void ordenar(int matriz[][200], int n){
  int aux[][200];
  int k = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        aux[k++] = matriz[i][j];
    }
  }
  for(int i = 0; i < k-1; i++){
    for(int j = 0; j < k-i-1; j++){
        if(aux[j] > aux[j+1]){
            int auxiliar = aux[j];
            aux[j] = aux[j+1];
            aux[j+1] = auxiliar;
        }
    }
  }
  k = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        matriz[i][j]=aux[k++];
    }
  }
  printf("matriz ordenada :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}
/*
Solicitar al usuario que ingrese una matriz para realizar las siguientes 
operaciones: 
a.  Calcular el producto de los elementos de la diagonal principal. 
b.  Calcular la suma de los elementos de la triangular superior 
c.  Ordenarla de menor a mayor e imprimirla
*/