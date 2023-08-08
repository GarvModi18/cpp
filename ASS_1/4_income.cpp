#include <iostream>
using namespace std;
int main(){

	int salary,tax_rate,net_sal;
	

	cout<<"enter your salary\n";
	cin>>salary;

	cout<<"enter your tax_rate\n";
	cin>>tax_rate;

	float tax=(salary*tax_rate*12)/100;

	cout<<"your net salary is : "<<12*salary<<endl;
	cout<<"your income tax is :"<<tax<<endl;

}