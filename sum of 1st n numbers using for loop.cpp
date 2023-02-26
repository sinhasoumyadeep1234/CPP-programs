//sum of 1st n natural numbers//
#include<iostream>
using namespace std;

int sum(int number){
	int add=0;
	for(int i=0;i<=number;i++){
		add+=i;
	}
	return add;
}
int main(){
	int n;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	int result=sum(n);
	cout<<"Summation upto given number is:"<<result;
}