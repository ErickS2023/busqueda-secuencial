/*
// busqueda secuencial ordenar en funciones pendiente
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int i, j,num,elemento,bandera=0;
	
	srand(time(NULL));
	printf("Numero de elementos a crear:\n");
	scanf("%d", &num);
	int lista[num];
	printf("Elemento a buscar:\n");
	scanf("%d",&elemento);
	
	for (i=0;i<num;i++){
		lista[i]=rand()%(10+ 1 - 1) + 1;
	}
	printf("Elementos de la lista\n");
	for(i=0;i<num;i++){
		printf("%d",lista[i]);
	}
	printf("\n");
	for(i=0;i<num;i++){
		if(lista[i]==elemento){
			printf("Elemento en posicion:%d\n",i+1);
			bandera=1;
			break;
		}
	}
	if(bandera==0){
		printf("Elemento no se encuentra");
	}	
	return 0;
}


//busqueda binaria ordenar en funcion pendiente
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i,j,num,elemento,bandera=0;
	int primero, ultimo, mitad;
	
	srand(time(NULL));
	int lista[10]={1,2,4,6,9,10,11,15,18,20};
	num=10;
	
	printf("Elementos de la lista\n");
	for(i=0;i<num;i++){
		printf("%d",lista[i]);
	}
	printf("\n");
	printf("Elemento a buscar:\n");
	scanf("%d",&elemento);
	primero=0;
	ultimo=num-1;
	mitad=(primero+ultimo)/2;
	
	while (primero <= ultimo){
		if (lista[mitad] < elemento){
			primero = mitad + 1;
		}
		else if (lista[mitad]== elemento){
			printf("Posicion: %d\n",mitad+1);
			bandera=1;
			break;
		}
		else{ultimo = mitad-1;}
		mitad = (primero+ultimo)/2;
	}
	if(bandera==0){
		printf("Elemento no se encuentra");
	}	
	return 0;
}

//convertido en funcion 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int busquedaBinaria(int lista[], int num, int elemento) {
    int primero = 0, ultimo = num - 1, mitad;

    while (primero <= ultimo) {
        mitad = (primero + ultimo) / 2;

        if (lista[mitad] < elemento) {
            primero = mitad + 1;
        } else if (lista[mitad] == elemento) {
            return mitad; // Se encontró el elemento, devolver la posición
        } else {
            ultimo = mitad - 1;
        }
    }

    return -1; // Elemento no encontrado
}

int main() {
    int i, num = 10, elemento, posicion;
    int lista[10] = {1, 2, 4, 6, 9, 10, 11, 15, 18, 20};

    srand(time(NULL));

    printf("Elementos de la lista\n");
    for (i = 0; i < num; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    printf("Elemento a buscar:\n");
    scanf("%d", &elemento);

    posicion = busquedaBinaria(lista, num, elemento);

    if (posicion != -1) {
        printf("Posicion: %d\n", posicion + 1);
    } else {
        printf("Elemento no se encuentra\n");
    }

    return 0;
}



|*/ 
#include<stdio.h>
#include<time.h>

int main()
{
	clock_t tic=clock();
	
	int busquedaBinaria(int lista[], int num, int elemento);
    int primero = 0, ultimo = num, - 1, mitad;
    int i, num = 10, elemento, posicion;
    int lista[10] = {1, 2, 4, 6, 9, 10, 11, 15, 18, 20};

    srand(time(NULL));

    printf("Elementos de la lista\n");
    for (i = 0; i < num; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    printf("Elemento a buscar:\n");
    scanf("%d", &elemento);

    posicion = busquedaBinaria(lista, num, elemento);

    if (posicion != -1) {
        printf("Posicion: %d\n", posicion + 1);
    } else {
        printf("Elemento no se encuentra\n");
    }

    return 0;
}
	
	clock_t toc=clock();
	printf("Elapsed: %f seconds\n",(double)(toc-tic)/CLOCKS_PER_SEC);
	return 0;
}







