				     UNIVERSIDAD AUTÓNOMA DE BAJA CALIFORNIA
			            FACULTAD DE CIENCIAS QUÍMICAS E INGENIERÍA  
                                        ALGORITMOS Y ESTRUCTURA DE DATOS
                                                 PRÁCTICA #10

Nombre: Rodríguez Muñoz José Luis

Práctica: Búsqueda Lineal, Binaria e Interpolada

Fecha: 03/NOV/2019

Descripción:
	Búsqueda Lineal
El método de búsqueda más sencillo es la búsqueda lineal, este consiste en recorrer todo el vector comparando
con la llave de búsqueda; es decir, el dato que se está buscando, después de encontrar el elemento que coincida
regresa la posición donde lo encontró. Si la llave no se encuentra entonces regresa el método regresa el valor –1.

	Búsqueda Binaria
Este método requiere que el arreglo este previamente ordenado. El algoritmo de la búsqueda binaria es:
		1. Calcular el centro de la lista, con la fórmula (izquierdo+derecho)/2. Izquierdo y derecho son las posiciones
		del elemento menor y mayor del vector.
		2. Encontrar el elemento central del arreglo, la llave se compara con el centro si es igual aquí termina la
		búsqueda.
		3. Si no es igual determinar si la llave se encuentra en el lado izquierdo o derecho de la lista.
		4. Redefinir el inicio o el final según donde ese haya ubicado la llave. Si la llave es mayor que el centro
		entonces izquierdo=centro+1. Si la llave es menor que el centro entonces derecho=derecho-1
		5. Repetir desde el primer paso hasta encontrar el dato o hasta que ya no sea posible dividir más.
		6. Si la llave no fue encontrada regresar -1.

	Búsqueda Interpolada
Si los datos están distribuidos de forma uniforme, este método puede ser más eficiente que la búsqueda binaria.
Básicamente el algoritmo es el mismo que el de la búsqueda binaria. La diferencia radica en que en la búsqueda
interpolada no se busca el dato en el centro del arreglo sino que se calcula su posición aproximada con la siguiente fórmula:

									(i < j) ; g = (j-i)(z-A[i]) / (A[j] - A[i]

	Desarrollo:
Implemente los algoritmos de las búsquedas lineal, binaria e interpolada para un arreglo de tamaño N, utilizando
inicialmente un arreglo tipo int de 20 posiciones, pruebe los algoritmos y elabore una tabla con los siguientes datos:

	a) El tiempo para el peor de los casos
	b) El tiempo para el mejor de los casos
	c) El tiempo para cualquier otro caso
	d) La cantidad de iteraciones realizadas en las tres búsquedas para cada caso
	e) ¿Qué pasa al cambiar el tipo de datos del vector de int a float?
	f) ¿Qué pasa al aumentar el tamaño de N?
	g) ¿Qué pasa si el elemento NO está en el arreglo
	h) ¿Se puede utilizar la búsqueda binaria para cadenas? Si o no, ¿por qué?
	i) ¿Se puede utilizar la búsqueda interpolada para cadenas? Si o no, ¿por qué?

	- No se pide que capture las datos, inicialice los arreglos con los valores necesarios.
	- Las funciones deben presentar en todo momento en pantalla los datos sobre los que se está realizando
	la búsqueda.
	- Lenguaje C o Java.

	Elabore un reporte con la siguiente estructura:

		Introducción: Teoría sobre los 3 métodos de búsqueda.
		Desarrollo: Explicación de los experimentos realizados, incluya capturas de pantalla y la tabla de
		resultados obtenidos
		Conclusiones: Aprendizaje inferido de los resultados obtenidos
