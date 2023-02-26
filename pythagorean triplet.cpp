//Pythogoras Triplets//

#include<iostream>
using namespace std;

bool check(int x,int y,int z){
	int a=max(x,max(y,z));		//hypotenuse is the longest side hence storing the max value separately//
	int b,c;
	if(a==x){
		b=y;
		c=z;
	}
	else if(a==y){
		b=x;
		c=z;
	}
	else{
		b=y;
		c=x;
	}
	if(a*a==b*b+c*c){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int x,y,z;
	cout<<"Enter the values of Hypotenuse,Base and Perpendicular"<<endl;
	cin>>x>>y>>z;
	if (check(x,y,z)==true){
		cout<<"\nGiven numbers are Pythagorean Triplets"<<endl;
	}
	else{
		cout<<"\nGiven numbers did'nt form Pythagorean triplets"<<endl;
	}
	return 0;
}