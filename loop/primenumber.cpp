#include <iostream>

using namespace std;

int main()
{
    int i, n,count=0;
    bool flag = true;
    cout << "enter any number for check prime number or not = ";
    cin >> n;

    for (i = 2; i < (n / 2); i++)
    {
        count++;
        if (n % i == 0){
            cout<<"its not prime number "<<endl;
            
            return 0;
            
        }
        
    }
    cout << " count = " << count<<endl;
    
    if(flag=true){
        cout<<"its is a prime number "<<endl;
       
    }
    return 0;
}