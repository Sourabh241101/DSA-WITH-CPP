#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
		string s;
		getline(cin,s);
		// reverse first half of a string
		
		int l=s.length();
		reverse(s.begin(),s.begin()+(l/2)) ;
		cout<<s;
		
	
}
