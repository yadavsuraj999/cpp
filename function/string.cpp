#include <iostream>

using namespace std;
int stringarr(string);
int vowel(string);
int specialchar(string);

int main(){
   
    string v;
    getline(cin, v);
    cout<< stringarr(v)<<endl;
    cout<< vowel(v);
    
return 0;
}

int stringarr(string v){
    int count=0;
    for(int i=0; v[i] != '\0'; i++){
        
            count++;
    }
    return count;
}

int vowel(string v){
    int count=0;
    for(int i=0; v[i] != '\0'; i++){
        if(v[i]=='a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u'||v[i]=='A'||v[i]=='E'||v[i]=='I'||v[i]=='O'||v[i]=='U'){
            count++;
        }
    }
    return count;
}


