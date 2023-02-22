//More optimized Program for prime number check and also reduce the search space//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int number;
	cout<<"Enter a number"<<endl;
	cin>>number;
	
	bool flag=0;
	
	for(int i=2;i<=sqrt(number);i++){
		if(number%i==0){
			cout<<"Not a prime number"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"Number is a prime number"<<endl;
	}
}