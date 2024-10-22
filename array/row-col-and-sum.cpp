#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;

    cout<<"Enter Number Of Row : ";
    cin>>row;
    cout<<"Enter Number Of col : ";
    cin>>col;

    int arr[row][col];

    for(i=0; i<row; i++ ){
        for(j=0; j<col; j++){
            cout<<"Enter Value : "<<i<<j<<" : ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for(i=0; i<row; i++ ){
        for(j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int row_sum,col_sum,sum=0,k;

    cout<<"Enter Index For Row_Sum : ";
    cin>>row_sum;

    for(k=0; k<row; k++){
        sum=sum+arr[row_sum][k];
    }

    cout<<"Enter Index For Col_Sum : ";
    cin>>col_sum;


    cout<<"Sum of row : "<<sum<<endl;


    sum=0;


     for(k=0; k<row; k++){
        sum=sum+arr[k][col_sum];
    }

    cout<<"Sum of col : "<<sum<<endl;
    
return 0;
}

