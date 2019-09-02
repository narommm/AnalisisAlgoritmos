
#include <iostream>

int fibo(int n, int i, int j){
    if(n==0){
        return j;
    }
    else
    return fibo(n-1, j, i+1);
}
int calcularfibo(int n){
    return fibo(n,0,1);
}

int fibonacci(int n){
    if ((n == 0) || (n == 1))
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2); 
}
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);

    return 0;
}
