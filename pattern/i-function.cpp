#include <iostream>

using namespace std;

int main(){
    int i,j,s;

    for(i=5; i>=1; i--){
        for(s=1; s<i; s++){
            cout<<"  ";
        }
        for(j=i; j<=5; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
return 0;
}