#include<iostream>
using namespace std;
void display(int a[]){
	for(int i=0;i<=4;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void change(int b[]){
	b[0]=100;
}

int main(){
	int arr[]={1,3,5,6,8} ;
	//accessing the element of array in another func
	// updation, pass by value / reference??
	display(arr) ;
	change(arr);
	display(arr);
}
