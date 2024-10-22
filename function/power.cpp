#include <iostream>

using namespace std;

  void power(int, int);

int main(){
    int a,b;
    cout <<"Enter Value : ";
    cin>>a;
    cout <<"Enter Power : ";
    cin>>b;
    
    power(a,b);
    


return 0;
}

void power(int x, int y){
    int sum=1;
    for(int i=1; i<=y; i++){
        sum=sum*x;
    }
    cout<<sum;
}