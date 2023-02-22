//Factorial of a number//

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
	cout<<"Enter the nummber to find its factorial"<<endl;
	cin>>n;
	int ans=fact(n);
	cout<<ans;
}