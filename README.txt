Este código implementa una solución para el problema de las 8 reinas, que consiste en colocar 8 reinas 
en un tablero de ajedrez de 8x8 de manera que ninguna reina pueda atacar a otra, es decir, no pueden 
estar en la misma fila, columna o diagonal.

Descripción detallada del código:

crearTablero:
Crea un tablero de 8x8 lleno de ceros (0), y coloca un 1 en las posiciones dadas por un conjunto 
de coordenadas (filas y columnas) que representan la posición de las reinas.

agregarSolucion:
Dada una lista de soluciones (cada solución es un tablero), agrega una nueva solución a la lista. 
Esto se realiza reservando más espacio para la nueva solución y copiando las soluciones previas 
a una nueva lista con más capacidad.

eliminarSolucion:
Elimina una solución de la lista de soluciones, excluyendo la solución en la posición indicada. 
Se crea una nueva lista sin la solución eliminada y se libera la memoria de la lista anterior.

imprimir:
Imprime un tablero de 8x8 en consola, mostrando los 1s (que representan las reinas) y los 0s.

imprimirSoluciones:
Imprime todas las soluciones almacenadas (tableros) en la lista de soluciones.

verificarHorizontal, verificarVertical y verificarDiagonal:
Estas funciones verifican si en el tablero hay más de una reina en la misma fila, columna o 
diagonal, respectivamente. Devuelven 1 si la regla se cumple (no hay conflictos) y 0 si hay conflictos.

Flujo del programa en main:

-Se inicializan variables para almacenar las posiciones de las reinas y se crean las estructuras 
necesarias para almacenar los tableros.

-Se generan todas las posibles combinaciones de posiciones para las 8 reinas en el tablero. Por cada combinación, se 
crea un tablero y se agrega a la lista de soluciones.

-Se imprimen las soluciones.

-Se filtran las soluciones, eliminando aquellas que no cumplen con las restricciones:
	Primero, se eliminan las soluciones que tienen más de una reina en la misma fila (verificación horizontal).
	Luego, se eliminan las soluciones que tienen más de una reina en la misma columna (verificación vertical).
	Finalmente, se eliminan las soluciones que tienen más de una reina en la misma diagonal (verificación diagonal).
	Se imprimen las soluciones que cumplen con todas las restricciones del problema de las 8 reinas.

Resumen:
El código busca todas las posibles disposiciones de 8 reinas en un tablero y luego filtra las 
que cumplen con las restricciones de no compartir filas, columnas o diagonales, mostrando las soluciones válidas.