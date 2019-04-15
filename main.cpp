#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b;
	cout<<"¬ведите два числа\n";
	cin>>a>>b;
	cout<<a+b<<"\n";
	return 0;
}
