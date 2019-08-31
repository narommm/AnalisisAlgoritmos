
#include <iostream>

using namespace std;
int potencia (double base, int exponente);
int main()
{
    double base, resultado;
    int expo;
    base =2;
    expo=3;
    resultado = potencia(base, expo);
    cout<<resultado;
    

    return 0;
}

int potencia(double x, int n){
   if(n==0) return 1;
   else return x*potencia(x,n-1);
}