#include <iostream>

using namespace std;

int main()
 {
 	
  int c, d, r = 0;
  
  cout << "Enter the number to check ";
  cin >> c;
  
  for (d = 1; d <= c; d++)
  {if (c % d == 0)
  {
  	c++;
  }
  }
  if (c == 2)
  {
  	cout << "The number entered is prime" << endl;
  }
  else 
  {
  	cout << "The number entered is not prime" << endl;
  }
  return 0;
  }
 	
 	
 
