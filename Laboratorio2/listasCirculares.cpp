
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
            n->sig=nullptr;
            n->ant=nullptr;
            return n;
        }
        void agregarNodo(int valor){
            Nodo *n crearNodo(valor);
            if(!fin){
                fin=n;
                n->sig=fin;
            }else{
                n->sig=fin->sig;
                fin->sig=n;
                fin=n;
            }

        }
};

int main()
{
    ListaEnlazada control;
    control.agregarElemento(2);
    control.agregarElemento(4);
    control.mostrarListaAdelante();

    return 0;
}
