#include<iostream>
using namespace std;

int main(){
    char c;
    cin>>c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        cout<< c << " is a Vovel";
    }
    else{
        cout<< c << " is a consonant";
    }
    return 0;
}