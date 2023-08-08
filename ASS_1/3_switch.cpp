#include <iostream>
using namespace std;
int main(){

	int grade;

	cout<<"enter grade \n 1:A+ 2:A 3:B 4:C 5:D 6:F\n";
	cin>>grade;

	switch (grade) 
	{
	case 1:
	cout<<"grade points : 90+\n";
	break;

	case 2:
	cout<<"grade points : 80-90\n";	
	break;

	case 3:
	cout<<"grade points : 70-80\n";	
	break;

	case 4:
	cout<<"grade points : 50-70\n";	
	break;

	case 5:
	cout<<"grade points : 35-50\n";	
	break;

	case 6:
	cout<<"grade points : 0-35\n";	
	}	
}
