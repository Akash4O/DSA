/*
Problem : https://www.codechef.com/practice/course/arrays/ARRAYS/problems/DISCOUNTT?tab=statement
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        int at=0;//actual total of products
        int dt=0;//total of products after discount
        for(int i=0;i<n;i++){
            at=at+a[i];
            if(a[i]<=y){
                dt=dt+0;
            }else{
                dt=dt+(a[i]-y);
            }
        }
        
        int ct = dt+x; // dicount value + coupon value
        if(ct<at){
            cout<<"COUPON"<<endl;
        }else{
            cout<<"NO COUPON"<<endl;
        }
    }

}
