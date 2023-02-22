//Program to print all prime numbers between two given range#

#include<iostream>
#include<cmath>

using namespace std;

bool is_prime(int num){
	for(int i=2;i<sqrt(num);i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int a,b;
	cout<<"Enter two number to find all prime numbers present between them"<<endl;
	cin>>a>>b;
	cout<<"\nAll prime numbers between the given range are\n"<<endl;
	for(int i=a;i<=b;i++){
		if(is_prime(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}