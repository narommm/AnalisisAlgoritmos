
#include <iostream>

using namespace std;
//RECURSION POR POSPOCION 
int factoria(int n){
    if(n==0)
        return 1;
    else
        return n*factoria(n-1);
}

int main()
{
    int n;
    cout<<"Inserte n;"<<endl;
    cin>>n;
    cout<<factoria(n);

    return 0;
}
