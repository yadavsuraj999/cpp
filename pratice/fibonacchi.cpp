#include <iostream>

using namespace std;

int main(){
    int n,a=0,b=1,sum=0;
    cout<<"enter Number : ";
    cin>>n;

    cout<<a<<" "<<b<<" ";

    for(int i=2; i<n; i++){
       sum=a+b;

       a=b;
       b=sum;
       cout<<sum<<" ";

    }
return 0;
}