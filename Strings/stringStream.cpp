#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	string str="Raghav is a    maths techer";
	stringstream ss(str);
	string temp;
	while(ss>>temp){
		cout<<temp<<endl;
	}
	
	
}                
