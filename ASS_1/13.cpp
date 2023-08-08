#include<iostream>
using namespace std;
void sum(){
	int n,num,rem,sum=0;

	cout<<"enter num\n";
	cin>>n;
	num=n;
	while(n!=0){
		rem=n%10;
		n=n/10;
		sum=sum+rem;
			}
			cout<<"sum of digit of"<<num<<" : "<<sum<<endl;
}
void mult(){
int n,num,rem,mult=1;

	cout<<"enter num\n";
	cin>>n;
	num=n;
	while(n!=0){
		rem=n%10;
		n=n/10;
		mult=mult*rem;
			}
			cout<<"mult of digit of"<<num<<" : "<<mult<<endl;
}
void Armstrong(){
int n,num,i=0,temp=1,rem,sum=0;

	cout<<"enter num\n";
	cin>>n;
	num=n;
	while(n!=0){
		rem=n%10;
		n=n/10;
		temp=rem*rem*rem;
		sum+=temp;
			}
	if(sum==num)		
	cout<<num<<" : is Armstrong\n";
	else
	cout<<num<<" : is not Armstrong\n";
}
void Palindrome(){

	int n,num,rem,rev=0;

	cout<<"enter num\n";
	cin>>n;
	num=n;//1221

	do{
	rem= n % 10;
    rev = (rev * 10) + rem;
    n = n / 10;
	}
	while(n!=0);
	if(num==rev)
		cout<<num<<" : is Palindrome\n";
	else
		cout<<num<<" : is not Palindrome\n";	

}
int main(){

	int choice;

	do{
	cout<<"\n\n1:Sum of digit\n";
	cout<<"2:Mult of digit\n";
	cout<<"3:Armstrong num\n";
	cout<<"4:Palindrome num\n";
	cout<<"5:Exit\n";
	cin>>choice;

	if(choice==1)
	sum();

	if(choice==2)
	mult();

	if(choice==3)
	Armstrong();

	if(choice==4)
	Palindrome();
	
	if(choice>5||choice<1)
		cout<<"Invailed choice\n";
	}
	while(choice!=5);

}