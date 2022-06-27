#include <iostream>
using namespace std;


// simule una lista simple pero insertando datos ordenadamente, ademas imprimala por pantalla.

struct Nodo {
   int dato;
   Nodo *siguiente;
};

Nodo* insertar_ordenado(Nodo* inicio, Nodo* nuevo) {
    if (inicio == NULL || nuevo->dato < inicio->dato){
        nuevo->siguiente = inicio;
        inicio = nuevo;
    }else{
        Nodo* aux = inicio;
        while (aux->siguiente != NULL && aux->siguiente->dato < nuevo->dato) {
            aux = aux->siguiente;
        }
        nuevo->siguiente = aux->siguiente;
        aux->siguiente = nuevo;
    }
    return inicio;
}

Nodo* generar_nodo(int dato) {
    Nodo* nuevo = new Nodo;
    nuevo->dato = dato;
    nuevo->siguiente = NULL;
    return nuevo;
}

void imprimir_lista(Nodo* inicio) {
    for (Nodo* aux = inicio; aux != NULL; aux = aux->siguiente) {
       cout << aux->dato << " ";
    }
    cout << endl;
}

Nodo* cargar_lista_ordenada(Nodo* inicio) {
	
    inicio = insertar_ordenado(inicio, generar_nodo(5));
    inicio = insertar_ordenado(inicio, generar_nodo(4));
    inicio = insertar_ordenado(inicio, generar_nodo(13));
    inicio = insertar_ordenado(inicio, generar_nodo(15));
    
    return inicio;    
}

int main() {        
    
	Nodo* listaA = NULL;
    listaA = cargar_lista_ordenada(listaA);
    imprimir_lista(listaA);

    return 0;
}
