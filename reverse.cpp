#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int rev = 0;
    while (n>0)
    {
       int lastnum = n%10;
       rev = rev*10+lastnum;
       n=n/10;
    }
    cout<< rev<<endl;
    return 0;
}