
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
        void mostrarListaAtras(){
            Nodo *temp=fin;
            if(!inicio){
                cout<<"NO tiene elementos";
            }else{
                while(temp){
                    cout<<temp->dato<<endl;
                    temp=temp->ant;
                }
            }
        }
        /*Ingresa valor y el anterior debe de ser eliminado
        1,2,3
        */
        void Eliminar(int valor){
            Nodo *tempI=inicio;
            Nodo *tempF=fin;
            if(!valor){
                cout<<"NO hay ningún valor"<<endl;
            }
            else{
                while(tempI){
                    if(tempI->dato==valor){
                        Nodo *anterior=tempI->ant;
                        tempI->ant=anterior->ant;
                        anterior->ant->sig=anterior->sig;
                        free(anterior);
                        break;
                }
                tempI= tempI->sig;
                
            }
            }
            
        }
        /*Cambia los valores de los nodos con respecto a las posiciones dadas*/
        void cambiarPosicion(int pos1, int pos2){
            Nodo *tempI=inicio;
            Nodo *temp = inicio;
            cont1=1;
            cont2=1;
            if(!valor){
                cout<<"NO hay ningún valor para ser cambiado"<<endl;
            }
            /*Caso trivial en el que solo haya un nodo en la lista ..... */
            /*Caso contrario, recorra la lista buscando los datos*/
            else{
                while(tempI){
                    if(cont1==pos1){
                        datoPos1=tempI->dato;
                        while(temp){
                            if(cont2==temp){
                                datoPos2=temp->dato;
                                int aux;
                                aux = datoPos2;
                                datoPos1=datoPos2;
                                datoPos2=aux;
                                
                            }
                            cont2++;
                            temp=temp->sig;
                            
                        }
                        break;
                }
                tempI= tempI->sig;
                cont1++;
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
    control.Eliminar(3);
    control.mostrarListaAdelante();
    return 0;
}