#include<iostream>
using namespace std;
int main(){
	int m;
	cout<<"Enter Row no.: ";
	cin>>m;
	int n;
	cout<<"Enter Column no.: ";
	cin>>n;
	int arr[m][n];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Matrix is : "<<endl;
	int max=arr[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(max<arr[i][j]){
				max=arr[i][j];
			 }
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Largest element in the matrix is: "<<max ;
	
}
