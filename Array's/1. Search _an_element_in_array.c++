/*
Problem : https://www.codechef.com/practice/course/arrays/ARRAYS/problems/SEARCHINARR?tab=statement
*/



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,x;
    
    cin>>n>>x;
    
    bool flag = false;
    for(int i=0;i<n;i++){
        int element;
        cin>> element;
        if(element==x){
            flag=true;
        }
    }
    
    if(flag){
        cout<<"YES";
    }else{
        cout<<"No";
    }
    
}
