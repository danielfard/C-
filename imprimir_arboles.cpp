#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// crea un arbol binario y luego  imprimelo en preorder inorden y posorden y eliminar nodo

struct nodo {
    int info;
    struct nodo *izq;
    struct nodo *der;
};

struct nodo *raiz=NULL;

void insertar_nodo(int x){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct *nodo));
    nuevo->info = x;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    if (raiz == NULL)
        raiz = nuevo;
    else{
        struct nodo *anterior, *reco;
        anterior = NULL;
        reco = raiz;
        while (reco != NULL){
            anterior = reco;
            if (x < reco->info)
                reco = reco->izq;
            else
                reco = reco->der;
        }
        if (x < anterior->info)
            anterior->izq = nuevo;
        else
            anterior->der = nuevo;
    }
}

void imprimirPre(struct nodo *reco)
{
    if (reco != NULL)
    {
        printf("%i-",reco->info);
        imprimirPre(reco->izq);
        imprimirPre(reco->der);
    }
}


void imprimirEntre(struct nodo *reco)
{
    if (reco != NULL)
    {
        imprimirEntre(reco->izq);
        printf("%i-",reco->info);
        imprimirEntre(reco->der);
    }
}

void imprimirPost(struct nodo *reco)
{
    if (reco != NULL)
    {
        imprimirPost(reco->izq);
        imprimirPost(reco->der);
        printf("%i-",reco->info);
    }
}

void borrar_nodo(struct nodo *reco)
{
    if (reco != NULL)
    {
        borrar_nodo(reco->izq);
        borrar_nodo(reco->der);
        free(reco);
    }
}


int main()
{
    insertar_nodo(100);
    insertar_nodo(50);
    insertar_nodo(25);
    insertar_nodo(75);
    insertar_nodo(150);
    printf("Impresion preorden: ");
    imprimirPre(raiz);
    printf("\n\n");
    printf("Impresion entreorden: ");
    imprimirEntre(raiz);
    printf("\n\n");
    printf("Impresion postorden: ");
    imprimirPost(raiz);
    borrar_nodo(raiz);
    
	getch();
    return 0;
}
