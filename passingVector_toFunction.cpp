#include<iostream>
#include<vector>
using namespace std;
 // vectors are passed by value
void change(vector<int>a){    // a-> 90 24 112 80 57
	a[0]=100;    // a-> 100 24 112 80 57
	for(int i=0;i<a.size();i++){
    	cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
    vector<int> v; 
    v.push_back(90);
    v.push_back(24);
    v.push_back(112);
    v.push_back(80);
    v.push_back(57);
    
    for(int i=0;i<v.size();i++){
    	cout<<v[i]<<" ";
	}
	cout<<endl;
	change(v);
	for(int i=0;i<v.size();i++){
    	cout<<v[i]<<" ";
	}
	
 }
