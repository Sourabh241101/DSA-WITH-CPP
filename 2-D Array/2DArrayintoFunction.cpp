#include<iostream>
#include<vector>
using namespace std;
void change2DVector(vector< vector<int> >&v){
	v[0][1]=100;
}
int main(){
	vector <vector<int> > v; 
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
	
	cout<<"Element at 1st row and 2nd column is "<<v[0][1]<<endl;
	change2DVector(v);
	cout<<"Element at 1st row and 2nd column after applying change function "<<v[0][1];
	
	
}
