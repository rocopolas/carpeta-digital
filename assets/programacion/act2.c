#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int cantidadAlumnos;
	int cantidadNotas;
	
	printf("Cantidad de alumnos: ");
	scanf("%d",&cantidadAlumnos);
	int alumnos[cantidadAlumnos][255];
	
	int i;
	for(i=0; i < cantidadAlumnos; i++){
		printf("Alumno %d, Cantidad de notas: ",i+1);
		scanf("%d",&cantidadNotas);
		
		int x;
		for(x=0; x < cantidadAlumnos; x++){
			printf("Alumno %d, Nota %d: ",i+1,x+1);
			scanf("%d",&alumnos[i][x]);
		}
	}
	
	int y;
	int z;
	for(y=0; y < cantidadAlumnos; y++){
		for(z=0; z < cantidadNotas; z++){
			printf("\n");
			printf("Alumno %d, Nota %d: %d",y+1,z+1,alumnos[y][z]);
		}
	}
	
	int y;
	int z;
	for(y=0; y < cantidadAlumnos; y++){
		for(z=0; z < cantidadNotas; z++){
			printf("\n");
			printf("Alumno %d, Nota %d: %d",y+1,z+1,alumnos[y][z]);
		}
	}
	
	// nececito mandar la matriz por una funcion
	
	
	return 0;
}
