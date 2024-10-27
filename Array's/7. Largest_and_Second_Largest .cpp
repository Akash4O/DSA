/*
Problem : https://www.codechef.com/practice/course/arrays/ARRAYS/problems/LARGESECOND
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        int fbig= *max_element(a,a+n),sbig=0;
        for(int i=0;i<n;i++){
            if(a[i]<fbig && a[i]>sbig){
                sbig=a[i];
            }
            
        }
        int sum = fbig+sbig;
        cout<<sum<<endl;
    }
}
