

#include <iostream>

using namespace std;
int menorAux(int A[], int n, int pos, int i){
    if(i==n){
        return A[pos];
    }
    else{
        if(A[i]<A[pos])
            return menorAux(A, n, i, i+1);
        else
            return menorAux(A, n, pos, i +1);
    }
    
}
int menor(int A[], int n){
    return menorAux(A,n,0,0);
}

int main()
{
    int A[]={3,2,1,0};
    cout<<menor(A,4);
    

    return 0;
}