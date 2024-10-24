#include <iostream>

using namespace std;

void change(int*);

int main(){

    int y=20;
    change(&y);
    cout<<y;

return 0;
}

void change(int *a){
    *a=25;
    cout<<*a<<endl;;
}
