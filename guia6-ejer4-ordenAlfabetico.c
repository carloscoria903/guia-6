/*en ves de letras ordena palabras*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void pedirNombre(char nombre[][50],int n);
void elimiLinea(char nombre[][50], int n);
void nombresOrdenados(char nombre[][50], int n);
int main(){
    int n;
    printf("ingrese la cantidad de nombres que desea ingresar \n");
    scanf("%d", &n);
    getchar();
    char nombre[n][50];
    pedirNombre(nombre,n);
    elimiLinea(nombre, n);
    nombresOrdenados(nombre, n);
    return 0;
}
void pedirNombre(char nombre[][50], int n)
{
int i;
printf("ingrese los nombres \n");
for(i = 0; i < n; i++){
printf("%d ", i + 1);
fgets(nombre[i], 50, stdin);
}
}
void elimiLinea(char nombre[][50], int n){
    for(int i = 0; i < n; i++){
        int largo = strlen(nombre[i]);
        if (largo > 0 && nombre[i][largo - 1] == '\n'){
            nombre[i][largo - 1] = '\0';
        }
    }
}
void nombresOrdenados(char nombre[][50], int n){
    char aux[50];
for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
        if(strcmp(nombre[i], nombre[j]) > 0){
            strcpy(aux, nombre[i]);
            strcpy(nombre[i], nombre[j]);
            strcpy(nombre[j], aux);
        }
    }
}
printf("nombres ordenados: \n");
for(int i = 0; i < n; i++){
    printf("%s\n", nombre[i] );
}
}
/*
Solicitar al usuario N palabras e imprimirlas en orden alfabético.
*/