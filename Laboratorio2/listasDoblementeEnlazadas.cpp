
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
            int cont1=1;
            int cont2=1;
            /*Caso trivial en el que solo haya un nodo en la lista ..... */
            /*Caso contrario, recorra la lista buscando los datos*/
                while(tempI){
                    if(cont1==pos1){
                        int datoPos1=tempI->dato;
                        //cout<<tempI->dato<<endl;
                        //cout<<"dato1"<<datoPos1;
                        while(temp){
                            if(cont2==pos2){
                                int datoPos2=temp->dato;
                                //cout<<temp->dato<<endl;
                                //cout<<"dato2"<<datoPos2;
                                int aux;
                               // aux = datoPos1;
                                //datoPos1=datoPos2;
                                //datoPos2=aux;
                                tempI->dato=datoPos2;
                                temp->dato=datoPos1;
                                
                            }
                            cont2++;
                            temp=temp->sig;
                            
                        }
                        break;
                }
                tempI= tempI->sig;
                cont1++;
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
    control.cambiarPosicion(1,3);
    control.mostrarListaAdelante();
    return 0;
}