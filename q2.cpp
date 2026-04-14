#include<iostream>
using namespace std;
int main()
{
	int temperature;
	cout<<"Enter temperature = ";
	cin>>temperature;
	
	if(temperature >= -50 && temperature <= 150)
	cout<<"The number is valid";
	
	return 0;
}  
