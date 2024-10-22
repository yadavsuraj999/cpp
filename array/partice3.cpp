// #include <iostream>

// using namespace std;

// int main()
// {
//     int row, col;

//     cout << "Enter Row Size : ";
//     cin >> row;
//     cout << "Enter col Size : ";
//     cin >> col;

//     int x[row][col];
//     for (int i = 0; i < row; i++){
//         for (int j = 0; j < i; j++){
//             cout<<"Enter value : ";
//             cin>>x[i][j];
//         }
//         cout<<endl;
//     }

//     for (int i = 0; i < row; i++){
//         for (int j = 0; j < i; j++){
//             cout<<x[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

   #include <iostream>
using namespace std;

int main(){
    int size,i,j;
    cout <<"input element = ";
    cin >>size;
    
    int arr[100][100];
    for(i = 0;i < size;i++){
        for(j = 0;j < size;j++){
            arr[0][j] = 1;
            arr[size-1][j] = 1;
            arr[size-i][size-j] = 1;           
            cout <<arr[i][j]<<" ";
        }   
        cout<<endl;
    }
}
