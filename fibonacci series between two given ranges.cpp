#include<iostream>
#include<cmath>

using namespace std;

void fibo(int n){
	int nextTerm;
	int t1=0;
	int t2=1;
	cout<<"\nThe fibonacci series upto the given range is --->\n"<<endl;
	for(int i=1;i<=n;i++){
		cout<<t1<<endl;
		nextTerm=t1+t2;
		t1=t2;
		t2=nextTerm;
	}
	return;
}
int main(){
	int n;
	cout<<"Enter a range for fibonacci series:";
	cin>>n;
	fibo(n);
	return 0;
}

