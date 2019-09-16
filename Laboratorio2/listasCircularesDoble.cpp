#include <iostream>

using namespace std;
struct Nodo{
    int dato;
    Nodo* sig;
    Nodo* ant;
}*inicio, *fin;

class listasCirculares{
    public:
        Nodo* crearNodo(int valor){
            Nodo *n= new Nodo;
            n->dato=valor;
            n->sig= nullptr;
            n->ant=nullptr;
            return n;
        }
        void mostrarListaAdelante(){
            
        }
}