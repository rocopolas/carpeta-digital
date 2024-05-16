#include <stdio.h>
#include <stdlib.h>

void devolver(int cantidadAlumnos, int cantidadNotas, int alumnos[cantidadAlumnos][255]){
	printf("\n");
	int x;
	for(x=0;x<cantidadAlumnos;x++){
		int z;
		for(z=0;z<cantidadNotas;z++){
			printf("Alumno %d, Nota %d: %d \n", x+1, z+1, alumnos[x][z]);
		}
	}
}

int main(int argc, char** argv) {
	int cantidadAlumnos;
	int cantidadNotas;
	
	printf("Cuantos alumnos vas a cargar: ");
	scanf("%d",&cantidadAlumnos);
	
	int alumnos[cantidadAlumnos][255];
	
	// Loop para cargar todas las notas de todos los alumnos
	int i;
	for(i=0;i<cantidadAlumnos;i++){
		printf("Cuantas calificaciones tiene el alumno %d: ",i+1);
		scanf("%d",&cantidadNotas);
		
		// Loop para cargar las notas de un alumno en particular
		int y;
		for(y=0;y<cantidadNotas;y++){
			printf("Alumno %d, nota %d: ",i+1,y+1);
			scanf("%d",&alumnos[i][y]);
		}
		
	}
	

	printf("\nEntonces las notas ingresadas son:");
	devolver(cantidadAlumnos,cantidadNotas,alumnos);
	printf("\n");
	
	while(1){
		
		int desicion;
		printf("1. Modificar una nota de un alumno\n");
		printf("2. Ordenar de > a <\n");
		printf("3. Ordenar de < a >\n");
		printf("4. Promedio de todos los alumnos\n");
		printf("5. Ver todas las notas\n");
		printf("Que queres hacer: ");
		scanf("%d",&desicion);
		
		switch(desicion){
			double promedio = 0;
			double promedioFinal;
			int x;
			int z;
			
			case 1:
				devolver(cantidadAlumnos,cantidadNotas,alumnos);
				
				int modificarAlumno;
				printf("Que alumno queres modificar: ");
				scanf("%d",&modificarAlumno);
				
				int modificarNota;
				printf("Que nota queres modificar: ");
				scanf("%d",&modificarNota);
				
				int modificar;
				printf("Que calificacion le pones: ");
				scanf("%d",&modificar);
				
				alumnos[modificarAlumno-1][modificarNota-1] = modificar;
				
				break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:
				printf("\n");
				for(x=0;x<cantidadAlumnos;x++){
					for(z=0;z<cantidadNotas;z++){
						promedio = promedio + alumnos[x][z];
					}
					promedioFinal = promedio / cantidadNotas;
					printf("Alumno %d, promedio: %f\n",x+1,promedioFinal);
				}
				break;
			case 5:
				devolver(cantidadAlumnos,cantidadNotas,alumnos);
				break;
		}
	}
	
	
	return 0;
}
