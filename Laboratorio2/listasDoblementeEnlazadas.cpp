
#include <iostream>

using namespace std;
struct Nodo(){
    int dato;
    Nodo* sig;
    Nodo* ant;
}*inicio, *fin;

class Controladora{
    public:
        Nodo* crearNodo(int valor){
            Nodo *n= new Nodo;
            n->dato=valor;
            n->sig=nullptr;
            n->ant=nullptr;
            return n;
        }
        void agregarElemento(int valor){
            Nodo *n= crearNodo(valor);
            if(inicio==NULL){
                inicio=n;
                fin=n;
            }else{
                fin->sig=n;
                n->ant=fin;
                fin=n;
            }
        }
        void mostrarListaAdelante(){
            Nodo *temp= inicio;
            if(inicio==NULL){
                cout<<"No hay elementos"<<endl;
            }else{
                while(temp){
                    cout<<temp<<", ";
                    temp =temp->sig;
                }
            }
        }
};
int main()
{
    Controladora control;
    control.agregarElemento(2);
    control.agregarElemento(4);
    control.mostrarListaAdelante();

    return 0;
}
