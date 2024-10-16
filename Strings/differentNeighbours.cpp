#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
		// different neighbours
		string s;
		cin>>s;
		int count =0;
		int n=s.length();
		for(int i=0;i<n;i++){
			 if(n==1)break;  // if only one char in string
			 
			 if(i==0){            // for 0th idx 
			 	if(s[i]!=s[i+1])count++;
			 }
			 else if(s[i]!=s[i+1] && s[i]!=s[i-1])count++;
			 else if(i==n-1){    // for last idx
			 	if(s[i]!=s[i-1]) count++;
			 }
		}
		cout<<count;
	
}
