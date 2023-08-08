#include <iostream>
using namespace std;
int main(){

	int a,b,temp;

	cout<<"enter a & b\n";
	cin>>a>>b;

	cout<<"Before swap \n a : "<<a<<" b : "<<b<<endl;  

	temp=a;
	a=b;
	b=temp;

	cout<<"After swap \n a : "<<a <<" b : "<<b<<endl;	



}