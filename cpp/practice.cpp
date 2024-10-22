#include <iostream>

using namespace std;

int main()
{
    int maths, hindi, gujarati, english, science, per;

    cout << "Enter Maths Mark = ";
    cin >> maths;
    cout << "Enter Hindi Mark = ";
    cin >> hindi;
    cout << "Enter Gujrati Mark = ";
    cin >> gujarati;
    cout << "Enter English Mark = ";
    cin >> english;
    cout << "Enter Science Mark = ";
    cin >> science;

    per = (maths + hindi + gujarati + english + science) / 5;

    if ((per >= 90) && (per <= 100)){
        cout << "A Grade " << per <<"%"<< endl;
    }else if((per >= 70) && (per <= 90)){
        cout << "B Grade " << per<<"%" << endl;
    }else if((per >= 50) && (per <= 70)){
        cout << "C Grade " << per<<"%" << endl;
    }else if((per >= 35) && (per <= 50)){
        cout << "D Grade " << per<<"%" << endl;
    }else{
        cout << "Fail"<< endl;
    }
    return 0;
}