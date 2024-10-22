#include <iostream>

using namespace std;

int main(){
    int row,col;

    cout<<"Enter Row : ";
    cin>>row;
    cout<<"Enter Col : ";
    cin>>col;

    int arr[row][col];
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter Value : ";
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"Your Diagonal IS : ";
    for(int i=0;i<row; i++){
        cout<<arr[i][i]<<" ";
    }
    cout<<endl;

    cout<<"Your Diagonal IS : ";
    for(int i=0; i<row; i++){
        cout<<arr[i][col-1-i]<<" ";
    }
return 0;
}