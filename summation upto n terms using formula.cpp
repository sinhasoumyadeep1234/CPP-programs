//sum of 1st n natural numbers using n*(n+1)/2 formula//
#include<iostream>
using namespace std;

int sum(int number){

	return (number*(number+1))/2;
}
int main(){
	int n;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	int result=sum(n);
	cout<<"Summation upto given number is:"<<result;
}