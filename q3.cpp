#include<iostream>
using namespace std;
int main()
{
      int num1,num2;
      cout<<"Enter first number = ";
      cin>>num1;
      
      cout<<"Enter second number = ";
      cin>>num2;
      
      if( num1> num2)
      cout<<"Larger = "<< num1 <<"\nsmaller = "<<num2;
      
      if( num2> num1)
      cout<<"Larger = "<< num2 <<"\nsmaller = "<<num1;
	
	return 0;
}
