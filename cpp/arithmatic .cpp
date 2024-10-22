#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    cout<<"Enter First Value = ";
    cin>>a;
    cout<<"Enter Second Value = ";
    cin>>b;

    cout<<"1 for addition"<<endl;
    cout<<"2 for subtraction" <<endl;
    cout<<"3 for multiplication"<<endl;
    cout<<"4 for division"<<endl;
    cin>>c;

    if(c==1){
cout <<a+b;
    }else if(c==2){
        cout<<a-b;
    }else if(c==3){
        cout<<a*b;
    }else if(c==4){

        cout<<a/b;
    }else {
        cout<<"Invalid number";
    }
    
    return 0;
}