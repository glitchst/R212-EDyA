#ifndef __SLIST_H__
#define __SLIST_H__

#include <stddef.h>

typedef void (*FuncionVisitante) (int dato);

typedef struct _SNodo {
  int dato;
  struct _SNodo *sig;
} SNodo;

typedef SNodo *SList;

/**
 * Devuelve una lista vacía.
 */
SList slist_crear();

/**
 * Destruccion de la lista.
 */
void slist_destruir(SList lista);

/**
 * Determina si la lista es vacía.
 */
int slist_vacia(SList lista);

/**
 * Agrega un elemento al final de la lista.
 */
SList slist_agregar_final(SList lista, int dato);

/**
 * Agrega un elemento al inicio de la lista.
 */
SList slist_agregar_inicio(SList lista, int dato);

/**
 * Recorrido de la lista, utilizando la funcion pasada.
 */
void slist_recorrer(SList lista, FuncionVisitante visit);

unsigned int slist_longitud (SList lista);

void slist_concatenar(SList lista1, SList lista2);

SList slist_insertar(SList lista, unsigned int posicion, int dato);

SList slist_eliminar(SList lista, unsigned int posicion);

unsigned int slist_contiene(SList lista, int elemento);

unsigned int slist_indice(SList lista, int dato);

SList slist_intersecar(SList lista1, SList lista2);

SList slist_intersecar_custom(SList lista1, SList lista2, FuncionVisitante comp);

void slist_ordenar(SList lista, FuncionVisitante comp);

SList slist_reverso(SList lista);

SList slist_intercalar(SList lista1, SList lista2);

#endif /* __SLIST_H__ */