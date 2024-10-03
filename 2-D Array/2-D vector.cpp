#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <vector<int> > v;  //2-D array declaration
	
	vector<int>v1;
	v1.push_back(12);
	v1.push_back(19);
	v1.push_back(25);
	
	vector<int>v2;
	v2.push_back(2);
	v2.push_back(87);
	v2.push_back(22);
	
	vector<int>v3;
	v1.push_back(54);
	v1.push_back(34);
	
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	
	cout<<v[0][1];
	
	
}
