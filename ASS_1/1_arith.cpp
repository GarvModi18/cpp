#include <iostream>
using namespace std;
int main(){
	int a,b,choice;

	cout<<"enter a & b \n";
	cin>>a>>b;
	cout<<"1:add 2:sub 3:mult 4:div 5:mod\n";
	cin>>choice;

	if(choice==1){
		cout<<"add: "<<a+b;
	}
	else if(choice==2){
		cout<<"sub: "<<a-b;
	}
	else if(choice==3){
		cout<<"mult: "<<a*b;
	}
	else if(choice==4){
		cout<<"div: "<<a/b;
	}
	else
		cout<<"mod: "<<a%b;
}