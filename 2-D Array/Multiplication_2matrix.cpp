#include<iostream>
using namespace std;
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int brr[3][2]={{1,2},{3,4},{5,6}};
	int res[3][2]={0};

	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<3;k++){
				res[i][j]+=arr[i][k]*brr[k][j];
			}
	
		}
		
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
}
