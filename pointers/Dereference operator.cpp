#include<iostream>
using namespace std;
 int main() {
 	int x=24;
 	int* p=&x;
 	cout<<x<<endl;
 	cout<<*p<<endl;  // *p refers to the value of the address that store in p
 	
 	*p=10;
 	cout<<x;
 	
 }
