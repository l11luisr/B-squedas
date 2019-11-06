#include <stdio.h>
#include <windows.h> // Para mostrar tiempo

// Funciones prototipo
void busquedaLineal(int arreglo[20]);
void busquedaBinaria(int array[20]);
void busquedaInterpolada(int array[20]);
void clearBuffer();
double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b);

int main()
{
	return menu();
}

// Implementación búsqueda lineal
void busquedaLineal(int arreglo[20])
{
    int busqueda, encontrado, i;
    printf("\n\t B%csqueda Lineal", 163);
    printf("\n\n Ingrese el n%cmero a buscar: ", 163);
    scanf("%d", &busqueda);
    encontrado = 0;

    for(i = 0; i < 20; i++)
    {
        if(arreglo[i] == busqueda) // Si lo encuentra la variable es igual a verdadero
            encontrado = 1;
    }
    if(encontrado == 1) // Si lo encuentra lo imprime
    {
        printf("\n %d se encuentra en el arreglo", busqueda, 162);
        printf("\n\n Lista de n%cmeros: ", 163);
        for(i = 0; i < 20; i++)
        {
            (i < 19)?printf(" %d ", arreglo[i]):printf(" %d ", arreglo[i]); // Se imprime el arreglo por monitoreo
        }
        getch();
    }
    else // En caso contrario no lo encuentra
    {
        printf("\n No se encontr%c ...", 162);
        printf("\n\n Lista de n%cmeros: ", 163);
        for(i = 0; i < 20; i++)
        {
            (i < 19)?printf(" %d ", arreglo[i]):printf(" %d ", arreglo[i]); // Se imprime el arreglo por monitoreo
        }
        getch();
    }
}

// Implementación búsqueda binaria
void busquedaBinaria(int array[20])
{
	int i, busqueda, centro, izquierda = 0, derecha = 19, encontrado = 0;
	printf("\n\t B%csqueda Binaria", 163);
	printf("\n\n Ingresa el n%cmero a buscar: ", 163);
	scanf("%d", &busqueda);

	while(!encontrado && izquierda <= derecha)
	{
		centro = ((izquierda + derecha) / 2); // Fórmula para el centro del arreglo

		if(busqueda == array[centro])
		{
			encontrado = 1; // Encuentra el elemento
		}
		else if(busqueda < array[centro])
		{
			derecha = centro - 1; // Busca hacía la izquierda
		}
		else
		{
			izquierda = centro + 1; // Busca hacía la derecha
		}
	}

	if(encontrado) // Si se encuentra lo imprime
	{
		printf("\n %d se encuentra en la posici%cn %d", busqueda, 162, centro + 1);
		printf("\n\n Lista de n%cmeros: ", 163);
        for(i = 0; i < 20; i++)
        {
            (i < 19)?printf(" %d ", array[i]):printf(" %d ", array[i]); // Se imprime el arreglo por monitoreo
        }
		getch();
	}
	else // En caso contrario no lo encuentra
	{
		printf("\n No se encontr%c ...", 162);
		printf("\n\n Lista de n%cmeros: ", 163);
		for(i = 0; i < 20; i++)
		{
			(i < 19)?printf(" %d ", array[i]):printf(" %d ", array[i]); // Se imprime el arreglo por monitoreo
		}
		getch();
	}
}

// Implementación búsqueda interpolada Complejidad: (log log n)
void busquedaInterpolada(int array[20])
{
	int i, g, busqueda, izquierda = 0, derecha = 19, encontrado = 0;
	printf("\n\t B%csqueda Interpolada", 163);
	printf("\n\n Ingresa el n%cmero a buscar: ", 163);
	scanf("%d", &busqueda);

	while(!encontrado && izquierda <= derecha)
	{
		g = (izquierda + ((busqueda - array[izquierda]) * (derecha - izquierda)) / (array[derecha] - array[izquierda])); // Fórmula posición aproximada

		if(busqueda == array[g])
		{
			encontrado = 1; // Si es igual se encuentra
		}
		else if(busqueda < array[g])
		{
			derecha = g - 1; // Busca hacía la izquierda
		}
		else
		{
			izquierda = g + 1; // Busca hacía la derecha
		}
	}

	if(encontrado) // Si lo encuentra lo imprime
	{
		printf("\n %d se encuentra en la posici%cn %d", busqueda, 162, g + 1);
		printf("\n\n Lista de n%cmeros: ", 163);
		for(i = 0; i < 20; i++)
        {
            (i < 19)?printf(" %d ", array[i]):printf(" %d ", array[i]); // Se imprime el arreglo por monitoreo
        }
		getch();
	}
	else // En caso contrario no lo encuentra
	{
		printf("\n No se encontr%c ...", 162);
		printf("\n\n Lista de n%cmeros: ", 163);
		for(i = 0; i < 20; i++)
		{
		    (i < 19)?printf(" %d ", array[i]):printf(" %d ", array[i]); // Se imprime el arreglo por monitoreo
		}
		getch();
	}
}

// Limpiar buffer
void clearBuffer()
{
    while(getchar() != '\n');
}

// Implementación para mostrar el tiempo de ejecución
double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
    LARGE_INTEGER frequencia;
	QueryPerformanceCounter(&frequencia);
	return (double)(a -> QuadPart - b -> QuadPart) / (double)frequencia.QuadPart;
}

int menu()
{
    int arreglo[20] = {11, 4, 7, 1, 2, 8, 9, 0, 23, 3, 5, 6, 12, 16, 15, 19, 15, 20, 30, 50};
    int array[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    LARGE_INTEGER tiempoInicial, tiempoFinal;
    double segundos;

    char opcion;
    do
    {
        system("cls");
        printf("\n\t B%csquedas", 163);
        printf("\n\n 1) B%csqueda Lineal", 163);
        printf("\n 2) B%csqueda Binaria", 163);
        printf("\n 3) B%csqueda Interpolada", 163);
        printf("\n 4) Salir");
        printf("\n\n\t Opci%cn: ", 162);
        opcion = getchar();

        switch(opcion)
        {
        case '1':
            system("cls");
            clearBuffer();
            QueryPerformanceCounter(&tiempoInicial);
            busquedaLineal(arreglo);
            QueryPerformanceCounter(&tiempoFinal);
            segundos = performancecounter_diff(&tiempoFinal, &tiempoInicial);
            printf("\n\n\t Tiempo de ejecuci%cn: %f segundos\n", 162, segundos);
            getch();
            break;

        case '2':
            system("cls");
            clearBuffer();
	        QueryPerformanceCounter(&tiempoInicial);
	        busquedaBinaria(array);
	        QueryPerformanceCounter(&tiempoFinal);
            segundos = performancecounter_diff(&tiempoFinal, &tiempoInicial);
            printf("\n\n\t Tiempo de ejecuci%cn: %f segundos\n", 162, segundos);
            getch();
            break;

        case '3':
            system("cls");
            clearBuffer();
            QueryPerformanceCounter(&tiempoInicial);
            busquedaInterpolada(array);
            QueryPerformanceCounter(&tiempoFinal);
            segundos = performancecounter_diff(&tiempoFinal, &tiempoInicial);
            printf("\n\n\t Tiempo de ejecuci%cn: %f segundos\n", 162, segundos);
            getch();
            break;

        }

    } while(opcion != '4' && opcion != EOF);
     {
        system("cls");
        printf("\n Cierre exitoso ...");
     }
    return 0;
}