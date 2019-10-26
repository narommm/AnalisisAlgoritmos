#include <iostream>

using namespace std;

int p[] = {0,1,5,8,9,10};
int r[] = {-1,-1,-1,-1,-1};
int cutting(int n){
    r[0]=0;
    for(int j=1;j<=n;j++){
        int q=-1;
        for(int i=1; i<=j;i++){
            q=max(q,p[i]+r[j-i]);
        }
        r[j]=q;
    }
    return r[n];
   
}
int main()
{
    cout<<cutting(5)<<endl;
    return 0;
}
