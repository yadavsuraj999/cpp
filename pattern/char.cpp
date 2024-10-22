#include <iostream>

using namespace std;

int main(){
    char k='A';
    char i,j;

    for(i='A'; i<='E'; i++){
        for(j=i; j>='A'; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

return 0;
}