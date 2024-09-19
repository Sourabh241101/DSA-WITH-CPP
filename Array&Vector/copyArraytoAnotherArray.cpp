 /*Ques : Write a program to copy the contents of one
array into another in the reverse order.*/
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int>v1;
	int n;
	cout<<"Vector size: ";
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v1.push_back(x);
	}
	cout<<"vector v1: ";
	display(v1);
	vector<int>v2(v1.size());
	for(int i=0;i<v2.size();i++){
		v2[i]=v1[v1.size()-1-i];         
	}
	cout<<"vector v2: ";
	 display(v2);
	

}
