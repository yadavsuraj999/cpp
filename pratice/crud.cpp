#include <iostream>

using namespace std;

int main(){
    int size,choise,idx=0;
    cout<<"Enter Array size : ";
    cin>>size;

    int arr[size];
    do{
        cout<<"Enter Choise : ";
        cin>>choise;

        switch (choise)
        {
        case 1:
            if(idx>=size){
                cout<<"array is overflow";
                break;
            }
            int value;
            cout<<"Enter value";
            cin>>value;
            arr[idx]=value;
            idx++;
            break;
        case 2:
            for(int val : arr){
                cout<<val<<" ";
            }
            break;

        case 3: 
            int index,update;
            cout<<"Enter Index value : ";
            cin>>index;
            cout<<"Enter value to update : ";
            cin>>update;

            arr[index]=update;
            break;

        case 4:

            if(idx==0){
                cout<<"Exit";
                break;
            }
            int v;
            idx--;
            v=arr[idx];
            arr[idx]=0;

            cout<<"Your delete Element : "<<v;
            break;
        }
    }while(choise != 5);

    return 0;
}