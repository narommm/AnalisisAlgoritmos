
#include <iostream>

using namespace std;
struct nodo{
    int dato;
    nodo *sig;
}* inicio;

class Controladora{
    public:
    nodo* crearNodo(int valor){
        nodo *n = new nodo;
        n->dato= valor;
        n->sig=NULL;
        return n;
    }
    void agregarNodo(int valor){
        nodo *n = crearNodo(valor), *temp;
        if(!inicio){
            inicio = n;
        }else{
            for(temp=inicio; temp->sig; temp=temp->sig);
                temp->sig=n;
        }
    }
    void mostrarLista(){
        nodo *temp=inicio;
        if(!inicio){
            cout<<"No hay ningún elemento en la lista"<<endl;
        }else{
            while(temp){
                cout<<temp->dato<<", ";
                temp = temp->sig ;
            }
            
        }
    } 
     Controladora(){
        inicio=NULL;
    }
};
int main()
{
    Controladora controladora;
    
    controladora.agregarNodo(1);
    controladora.agregarNodo(2);
    controladora.agregarNodo(3);
    controladora.agregarNodo(4);
    controladora.mostrarLista();
    return 0;
}