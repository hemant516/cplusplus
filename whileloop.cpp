#include<iostream>

using namespace std;

int main() 
{

	int n;


	  cout << "enter a positive integer : ";

	cin >> n;

	int i=1 ;

	while(i <= n) 
    {
		cout << i << " ";
		
          i = i+1;
	}

	cout << "You are outside the while-loop";

	return 0;
}