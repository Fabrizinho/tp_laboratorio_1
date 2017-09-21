
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    char apellido[26] , nombre[26];
    int edad;
    int estado;
    int dni;
}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona dato[], int );



/**Pasa a minuscula todas las letras de un array de chars. La primer letra del array y cada letra despues de un espacio las pasa a mayuscula
\* Param Un array de chars
\* Param Un entero
\* Return Un array de chars*/
void estilizarArrayDeChars(char[] , int);

/** Carga los campos de la estructura EPersona con valores que se le piden al usuario
\* Param Un array del tipo EPersona
\* Param Un entero
\* Return No retorna nada (void)*/
void alta(EPersona[] , int);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);

/** Verifica una igualdad entre un valor que ingrese el usuario y el DNI
\* Param Param Un array del tipo EPersona
\* Param Param Un entero
\* Return No retorna nada (void)*/
void baja(EPersona[] , int);

/** Muestra los elementos del array del tipo EPersona
\* Param Param Un array del tipo EPersona
\* Param Param Un entero
\* Return No retorna nada (void)*/
void mostrar(EPersona[] , int);

/** Ordena los elementos del array del tipo EPersona por orden alfabetico ascendente con los valores almacenados en el campo apellido empleando el metodo de burbujeo
\* Param Param Un array del tipo EPersona
\* Param Param Un entero
\* Return No retorna nada (void)*/
void ordenamiento(EPersona [], int);

/** Muesra en pantalla un grafico tomando como referencia el campo edad del array de tipo EPersona
\* Param Param Un array del tipo EPersona
\* Param Param Param Un entero
\* Return No retorna nada (void)*/
void imprimirGrafico(EPersona [], int);

#endif
