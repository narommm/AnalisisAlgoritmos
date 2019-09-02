
#include <iostream>

using namespace std;
int sumaArreglo(int arr[], int i, int total){
    if(i==0)
        return total;
    else{
        return sumaArreglo(arr, i-1,arr[i-1]+total);
    }
}

int totalSuma(int arr[],int i){
    return sumaArreglo(arr,i,0);
}
int main()
{
  int i, arr[5]={5,5,5,5,5};
  cout<<"Elemento hasta:"<<endl;
  cin>>i;
  cout<<totalSuma(arr,i);

    return 0;
}