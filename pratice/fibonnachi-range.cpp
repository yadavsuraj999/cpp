#include <iostream>

using namespace std;

int main(){
    int a=0,b=1,sum=0,start,end,ans;
    cout<<"Enter Start Range : ";
    cin>>start;
    cout<<"Enter End Range : ";
    cin>>end;

    int arr[end];

    for(int i=2; i<end; i++){
       ans=a+b;
       arr[sum]=ans;
       sum++;
       a=b;
       b=ans;
    }
    for(int i=start-3; i<end-2; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}