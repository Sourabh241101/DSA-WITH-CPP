#include<iostream>
using namespace std;

int main(){

int m;
cout<<"Enter Row no.: ";
cin>>m;
int n;
cout<<"Enter Column no.: ";
cin>>n;

int matrix1[m][n];
int matrix2[m][n];

for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>matrix1[i][j];
	}
}
	cout<<"Matrix 1 elements:"<<endl;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<matrix1[i][j]<<" ";
	}
	cout<<endl;

}
cout<<endl;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>matrix2[i][j];
	}
}
	cout<<"Matrix 2 elements:"<<endl;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<matrix2[i][j]<<" ";
	}
	cout<<endl;

}
cout<<endl;
int res[m][n];

for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		res[i][j]=matrix1[i][j]+matrix2[i][j];
	}
}
cout<<"Resultant Matrix:"<<endl;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<res[i][j]<<" ";
	}
	cout<<endl;
}


}
