// #include <iostream>

// using namespace std;

// int main()
// {
//     int i, size, sum=0;

//     cout << "Enter Number = ";
//     cin >> size;

//     int x[size];
//     for (i = 0; i < size; i++)
//     {
//         cout << "Enter Index Value of " << i << " : ";
//         cin >> x[i];
//     }

//     for (i = 0; i < size; i++)
//     {

//         sum = sum + x[i];
//     }
//     cout << "Average = " << sum /size ;

//     return 0;
// }


#include <iostream>

using namespace std;

int main(){
    int row,col;
    cout<<"Enter Number Of Row : ";
    cin>>row;
    cout<<"Enter Number Of Col : ";
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

    int sum=0,k,row_sum,col_sum;

    cout<<"Enter Row Index : ";
    cin>>row_sum;

    for(k=0; k<row; k++){
        sum=sum+arr[row_sum][k];
    }

    cout<<"Your Row Of Sum is : "<<sum;
    cout<<endl;

    sum=0;
    
    
    cout<<"Enter col Index : ";
    cin>>col_sum;
    for(k=0; k<row; k++){
        sum=sum+arr[k][col_sum];
    }

    cout<<"Your Col Of Sum is : "<<sum;
    
return 0;
}


