/*  
Programa de prueba para el checkpoint
El usuario introduce el tamaño en MB que quiere que ocupe la pila virtual
El argumento se puede pasar como parámetro o luego por consola
./checkpoint_tester <MB>
El programa reserva ese espacio, y activa un contador de segundos
El contador sirve para comprobar si el checkpoint se hace bien
(Si vuelve a contar por donde estaba)

*/

#include<stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MB_BLOCK 262144
#define MB 1048576 //Bytes que tiene un MB


//Espacio en MB
static int reserveByArray(int space_size, int *array_size){

	array_size = malloc(space_size*MB); 
	// Le damos valor porque el malloc sólo reserva el espacio, pero el SO no lo da,
	// cuenta con que no lo va a necesitar todo, así que lo va dando dinamicamente
	int i;	
	//Cada entero ocupa 4 bytes, por lo que un array de 262144 enteros ocupa 1MB
	int cells = space_size*MB_BLOCK;
	for (i = 0; i < cells; i++){
		*(array_size + i) = 1;
	}
	return 0;
}

int main(int argc, char *argv[])
{
	//int number_s = argv[1];
	
	if (argc !=3){
		printf("Usage: variableSizeTester <program size MB> <execution time SECONDS>\n");
		exit (-1);
	}
	int programSize = atoi(argv[1]);
	int executionTime = atoi (argv[2]);

	printf("Program size: %d MB\n", programSize);
	//Por malloc
	int *peso_del_programa;
	reserveByArray(programSize, peso_del_programa);
	printf("Execution time: %d seconds\n", executionTime);
	printf("\n");
	printf("\n");

	int cont = 0;
	while(cont++ < executionTime){//contador infinito de segundos
		printf("%d\n",cont);
		sleep(1);
	}

}
