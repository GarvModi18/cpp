#include <iostream>
using namespace std;
void fibo(int n){

	int a=0,b=1,next;

	for (int i = 0; i < n; ++i)
	{
		if(i<=1){
			next=i;
		}
		else
		{
			next=a+b;
			a=b;
			b=next;
		}

		cout<<next<<" ";
	}

}
int main(){

	int n;

	cout<<"enter size of fibonacci series\n";
	cin>>n;

	fibo(n);

}