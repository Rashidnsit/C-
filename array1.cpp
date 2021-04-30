#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int maxnum = INT_MIN ;
    int minmum= INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxnum= max( maxnum, array[i]);
        minmum= min(minmum,array[i]);
        // if (array[i]>maxnum)
        // {
        //     maxnum = array[i];
        // }
        // if (array[i]<minmum)
        // {
        //     minmum = array[i];
        // } 
    }

    cout<<maxnum << " " << minmum << endl;
    return 0;
    
}