
#include <iostream>

using namespace std;
int factorialAux(int n, int valor){
    if(n==0){
        return valor;
    }else{
        return factorialAux(n-1, valor*n);
    }
}
int factorial(int n){
    return factorialAux(n,1);
}
int main()
{
    int numero=0;
    int resultado;
    cout<<"Ingrese el número";
    cin>>numero;
    if(numero>=0){
        resultado=factorial(numero);
        cout<<resultado;
    }

    return 0;
}
