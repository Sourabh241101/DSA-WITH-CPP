//Arrays and pointer

#include<iostream>
using namespace std;
int main(){
	int arr[]={9,12,13,24};
	int *ptr=arr;      //giving address 
	cout<<ptr<<endl;
	int *ptr1=&arr[0];
	cout<<ptr1<<endl;    
	
	cout<<ptr[3]<<endl;
	ptr[0]=100;
	cout<<arr[0];
	
		  //address of array= address of array of first element
		
	
}
