/*
Problem : https://www.codechef.com/practice/course/arrays/ARRAYS/problems/UWCOI20A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n;
    
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int h=0;
        for(int j=0;j<n;j++){
            int elem;
            
            cin>>elem;
            if(elem>=h){
                h=elem;
            }
        }
        cout<<h<<endl;
    }
}
