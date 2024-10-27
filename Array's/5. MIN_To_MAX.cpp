/*
Problem : https://www.codechef.com/practice/course/arrays/ARRAYS/problems/OPMIN?tab=statement
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
        int m= *min_element(a,a+n);
        int x=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(m<a[i])
            {
                a[i]=m;
                x=x+1;
            }
        }
    
        cout<<x<<endl;
    }

}
