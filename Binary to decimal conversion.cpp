//Binary to decimal conversion//

#include<iostream>
using namespace std;

int binary_to_decimal(int number){
	int ans=0;
	int x=1;
	while(number>0){
		int last_digit=number%10;
		ans=ans+x*last_digit;
		x=x*2;
		number=number/10;
	}
	return ans;
}
int main(){
	int n;
	cout<<"\nEnter the binary number to convert it into decimal:"<<endl;
	cin>>n;
	int result=binary_to_decimal(n);
	cout<<"\nEquivalent decimal number is:"<<result;
}