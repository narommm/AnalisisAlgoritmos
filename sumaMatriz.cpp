
#include <iostream>
using namespace std;

void sumamatrizr(int A[][3], int B[][3], int C[][3], int i, int j){
    if(i==2 && j==2){
        C[i][j]=A[i][j] + B[i][j];
        cout << C[i][j] <<" ";
        
    } else {
        if(j > 2){
            i++;
            j = 0;
            cout<<endl;
        }else{
            C[i][j]=A[i][j] + B[i][j];
                
            cout << C[i][j] <<" ";
            
            j++;
        }
        sumamatrizr(A,B,C,i,j);
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
