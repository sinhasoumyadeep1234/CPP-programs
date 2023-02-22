//Pascals Triangle:Basically ncr in each row//
//1			|
//11		|
//121		| //For  n=5
//1331		|
//14641		|

#include <iostream>
using namespace std;

int fact(int num){
	int factorial=1;
	for(int i=1;i<=num;i++){
		factorial*=i;
	}
	return factorial;
}
int main(){
	int n;
	cout<<"Enter the range of the triangle:";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++){				//for row
		for(int j=0;j<=i;j++){		   //for column
			cout<<fact(i)/((fact(i-j))*fact(j))<<" ";  
		}
		cout<<endl;   //after each row we add line break
	}
	
	
}