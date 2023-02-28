//Max and Min elements of an array//

#include<iostream>
using namespace std;

int main(){
	int n,max,min;
	cout<<"Enter the array size:";
	cin>>n;
	int a[n];
	cout<<"\nEnter the array elements:"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max_no=a[0];
	int min_no=a[0];
	for(int i=0;i<n;i++){
		if(max_no<a[i]){
			max_no=a[i];
		}
		else if(min_no>a[i]){
			min_no=a[i];
		}
	}
	cout<<"Maximum element is:"<<max_no<<endl;
	cout<<"Minimum element is:"<<min_no<<endl;
}