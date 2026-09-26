//frequency of elements in an array
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) cin >> arr[i];
    //array created

    //precomputation
    int hash[13]={0};
    for (int i=0; i<n; i++) {
        hash[arr[i]]+=1;
    }

    int q; //no. of queries
    cin >> q;
    for (int i=1; i<=q; i++) {
        int m;
        cin >> m;
        cout << hash[m] << endl; //fetch
    }

    return 0;
}