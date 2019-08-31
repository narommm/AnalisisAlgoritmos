
#include <iostream>

using namespace std;
int sumamatrizr(int A[3][3],int B[3][3], int C[3][3], int i, int j){
    C[i][j]=A[i][j]+B[i][j];
    cout<<C[i][j]<<" ";
    int a=3;
    int b=3;
    if(i!=a-1 || j!=b-1){
        if(j==b-1){
            i++;
            j=0;
            cout<<"\n";    
        }else{
            j++;
            sumamatrizr(A,B,C,i,j);
        }
        
        
    }
}
int main()
{
    int i = 0;
  int j = 0;
  int A[3][3] = { {1, 2, 3}, {2, 3, 4}, {2, 5, 3} };
  int B[3][3] = { {4, 5, 6}, {7, 5, 4}, {2, 4, 9} };
  int C[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    sumamatrizr(A,B,C,i,j);

    return 0;
}

