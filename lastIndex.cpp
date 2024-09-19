// find the last occurrence of x in the array

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v; 
    v.push_back(90);
    v.push_back(24);
    v.push_back(112);
    v.push_back(20);
    v.push_back(57);
    v.push_back(90);
    v.push_back(24);
    v.push_back(112);
    v.push_back(20);
    v.push_back(57);
    
    int x=24;
    int idx=-1;
//    for(int i=0;i<v.size();i++){
//    	if(v[i]==x)idx=i;
//	}
//	cout<<idx;
for(int i=v.size()-1;i>=0;i--){
	if(v[i]==x){
		idx=i;
		break;
	}
}
cout<<idx;
    
    
    
    
}
