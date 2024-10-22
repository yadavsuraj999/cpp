#include <iostream>

using namespace std;

int main(){
    int y=5;
    int *pointer = &y;
    int **pointertopointer = &pointer;
    cout<<pointer<<endl;  //--->this is for were y  adderss
    cout<<*pointer<<endl;  // ---> this is y value
    cout<<**pointertopointer<<endl;
    cout<<&y;
return 0;
}