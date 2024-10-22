#include <iostream>

using namespace std;

int main()
{
    int i, j, s;
    for (i = 5; i >= 1; i--){
        for (j = 1; j <= i; j++){
            cout << j << " ";
        }
        for (s = 5; s > i; s--){
            cout << "    ";
        }
        for (j = i; j >= 1; j--){
            cout << j << " ";
        }
        
        cout << endl;
    }
    
    

    for (i = 1; i <= 5; i++){
        for (j = 1; j <= i; j++){
            cout << j << " ";
        }
        for (s = 5; s > i; s--){
            cout << "    ";
        }
        for (j = i; j >= 1; j--){
            cout << j << " ";
        }
        
        cout << endl;
    }

    
    
return 0;
}



// 1 1 1 1 1
//   2 2 2 2
//     3 3 3
//       4 4
//         5