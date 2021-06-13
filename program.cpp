#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int number, counter1, counter2;
  counter1 = 0;
  counter2 = 0;

  cout << "Enter a positive number no greater than 15" << endl;
  cin >> number;
  if (number < 1)
    {
      number = 1;
    }

  else if (number > 15)
    {
      number = 15;
    }

  while (counter1 < number)
    {
    	
   	while (counter2 < number)
	{
	  cout << 'X';
	  counter2 = counter2 + 1;
	}
     cout << endl;
     counter2 = 0;
     counter1 = counter1 + 1;

    }

    return 0;
}
