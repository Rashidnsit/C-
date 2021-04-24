#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long factorial = 1;
    cout << "factorial of " << n <<" is :"<<endl;

    for (int  i = 1; i <=n; i++)
    {
        factorial*=i;
    }
    cout << factorial;
    return 0;

}