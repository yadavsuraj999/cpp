#include <iostream>

using namespace std;

int main(){

    int i,j,s;

    for(i=5; i>=1; i--){
        for(j=1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(i=2; i<=5; i++){
        for(j=1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    

return 0;
}