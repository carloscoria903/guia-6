#include <stdio.h>
#include <stdlib.h>
void pedirMatriz(int matriz [3] [4]);
int main(){
    int matriz [3] [4];
    pedirMatriz(matriz);
    getchar();
    return 0;
}
void pedirMatriz(int matriz [3] [4]){
 printf("ingrese los numeros de la matriz \n");
 for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
        printf("posicion [%d] [%d] ", i, j);
        scanf("%d", &matriz[i] [j]);
    }
 }
    printf("la matriz ingresada es \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d " , matriz [i] [j]);
        }
        printf("\n");
    }
    printf("la primera fila es\n ");
    for(int i = 0; i < 3; i++){
        printf("%d \n ", matriz[i][0]);
    }
    printf("la ultima fila es\n ");
    for(int i = 0; i < 3; i++){
        printf("%d \n ", matriz[i][3]);
    }
    printf("la primera columna es\n ");
    for(int i = 0; i < 4; i++){
        printf("%d ", matriz[0][i]);
    }
}
/*
Crear y cargar una matriz de 3 filas por 4 columnas. Imprimir la primer fila, 
luego la última fila y por último la primer columna
*/