// A simple calculator using switch statement
#include<iostream>
using namespace std;
int main ()
{
	char op;
	float num1,num2;
	cout<<"enter two numbers"<<endl;
	cin>>num1>>num2;
	cout<<"enter an operator (+,-,*,/)"<<endl;
	cin>>op;
	switch (op)
	{
		case'+':
			cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
			break;
		case'-':
			cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
			break;
		case'*':
			cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
			break;
		case'/':
			cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
			break;
		default:
			cout<<"error!the operation is not correct"<<endl;
			break;
	}
	return 0;
}