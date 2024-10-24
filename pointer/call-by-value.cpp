#include <iostream>

using namespace std;

void change(int, int);

int main(){
int x=54,y=57;

change(x, y);

cout<<x<<" "<<y<<endl;

return 0;
}

void change(int a, int b){
    a=10;
    b=15;

    a=a^b;
    b=a^b;
    a=a^b;

    cout <<a<<" "<<b<<endl;
}