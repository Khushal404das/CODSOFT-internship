#include<iostream>
using namespace std;
int main ()
{
	//simple calculator
	int num1, num2;
	char operation;
	char choice;
	float result;
	do{
		cout<<"Enter the number1:";
		cin>>num1;
		cout<<"Enter the Operation you want (+,-,X,/):";
		cin>>operation;
		cout<<"Enter the number2:";
		cin>>num2;
		if(operation=='+'){
		result=num1+num2;
		cout<<"The Sum is:"<<result;
		}
		else if(operation=='-'){
			result=num1-num2;
			cout<<"The Subtraction is:"<<result;
		}
		else if(operation=='*'||operation=='x'||operation=='X'){
			result=num1*num2;
			cout<<"The Multiplication is:"<<result;
		}
		else if(operation=='/'){
			result=(float)num1/(float)num2;
			cout<<"The Division is:"<<result;
		}
		cout<<"\nYou want to use calculator again(Y/N)";
		cin>>choice;
	}
	while(choice=='Y'||choice=='y');
	return 0;
}
