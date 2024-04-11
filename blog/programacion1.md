
---

# Actividad 1

Rocco Perez

---

## Codigo

```
#include <stdio.h>
#include <stdlib.h>


int devolver(int notas[], int cantidad) {
	printf("\n");
	int i;
	for (i=1; i <= cantidad; i++){
		printf("Nota %d: %d \n",i,notas[i]);
	}
	return 0;
}

int loop(int notas[], int cantidad){
	printf("\nSeleccionar que quiere hacer con las notas: \n");
	printf("1. Recuperar las notas ingresadas \n");
	printf("2. Modificar una nota ingresada  \n");
	printf("3. Ordenar de mayor a menor   \n");
	printf("4. Ordenar de menor a mayor  \n");
	printf("5. Devolver el promedio de todas las notas \n");
	printf("6. Cargar un nuevo alumno.   \n");
	
	printf("Queres ir a: ");
	int desicion;
	scanf("%d",&desicion);
	if(desicion == 1){
		devolver(notas,cantidad);
	}
	
	if(desicion == 2){
		devolver(notas,cantidad);
		
		printf("Que nota queres cambiar: ");
		int notaCambiar;
		scanf("%d",&notaCambiar);
		
		printf("Cambiar el valor de %d a: ",notas[notaCambiar]);
		int numeroNotaCambiar;
		scanf("%d",&numeroNotaCambiar);
		notas[notaCambiar] = numeroNotaCambiar;
		
		devolver(notas,cantidad);
	}
	
	if(desicion == 3){
		int i, j, temp;
	    for (i = 1; i <= cantidad - 1; i++) {
	        for (j = 1; j <= cantidad - i; j++) {
	            if (notas[j] < notas[j + 1]) {
	                temp = notas[j];
	                notas[j] = notas[j + 1];
	                notas[j + 1] = temp;
	            }
	        }
	    }
	
	    devolver(notas, cantidad);
	}
	
	if(desicion == 4){
		int i, j, temp;
	    for (i = 1; i <= cantidad - 1; i++) {
	        for (j = 1; j <= cantidad - i; j++) {
	            if (notas[j] > notas[j + 1]) {
	                temp = notas[j];
	                notas[j] = notas[j + 1];
	                notas[j + 1] = temp;
	            }
	        }
	    }
	
	    devolver(notas, cantidad);
	}
	
	if(desicion == 5){
		int promedio;
		int suma = 0;
		int i;
		for(i=1;i<=cantidad;i++){
			suma = suma + notas[i];
		}
		promedio = suma / cantidad;
		printf("\nPromedio de todas las notas: %d\n", promedio);
	}
	
	if(desicion == 6){
		printf("\n");
		main();
	}
	
	if(desicion != 1 && desicion != 2 && desicion != 3 && desicion != 4 && desicion != 5 && desicion != 6){
		printf("\nError de tipeo, elige una de las opciones que se marcaron arriba...\n");
		loop(notas, cantidad);
	}
}
	
int main(void) {

	int cantidad;
	printf("Ingresar cantidad de notas del alumno: ");
	scanf("%d", &cantidad);
	
	int notas[cantidad];
	int i;
	for (i=1; i <= cantidad; i++){
		printf("Nota %d: ", i);
		scanf("%d",&notas[i]);
	}

	int a = 1;
	while (a==1){loop(notas, cantidad);}
	
	
	return 0;
}
```





