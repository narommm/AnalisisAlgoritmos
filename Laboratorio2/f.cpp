#include <iostream>

using namespace std;
struct Nodo{
    int dato;
    Nodo* sig;
    Nodo* ant;
}*inicio, *fin;

class ListaEnlazada{
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
            if(!inicio){
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
            if(!inicio){
                cout<<"No hay elementos"<<endl;
            }else{
                while(temp){
                    cout<<temp->dato<<", ";
                    temp =temp->sig;
                    
                }
            }
        }
        void IntecambiarDatos(int p1, int p2){
            Nodo *temp1 = inicio;
            Nodo *temp2 = inicio;
            int a=0, b=0, i;
            
            if(!p1 && !p2){
                cout<<"Error en las posiciones"<<endl;
            }
            else{
                while(i<=p1){
                    temp1->sig;
                }
                a = temp1->dato;
                i=0;
                while(i<=p2){
                    temp2->sig;
                }
                b = temp2->dato;
                
                temp1->dato = b;
                temp2->dato = a;
        }
        }
        ListaEnlazada(){
            inicio=nullptr;
           }
    
};
int main()
{
    ListaEnlazada control;
    control.agregarElemento(1);
    control.agregarElemento(2);
    control.agregarElemento(3);

    control.mostrarListaAdelante();
    control.IntecambiarDatos(1,3);
    control.mostrarListaAdelante();
    return 0;
}