#include <iostream>

using namespace std;

int main(){
      int n,mul=1;
        cout<<"enter number : ";
        cin>>n;

    for(int i=1; i<=n; i++){
        mul=mul*i;
    }
    cout<<"Your factorial is : "<<mul;


return 0;
}