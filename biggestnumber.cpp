//Author:Tommy Luo
#include<iostream>
using namespace std;
int main()
{
  //declare variables here
  int num1 = 0;
  int num2 = 0;

  cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  cin >> num1;
  
  cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  cin >> num2;
  //determine if first or second is bigger and store that in a third variable
 
 int bigger;
 if (num1 > num2) {
    bigger = num1;
  }
  else {
    bigger = num2;
  }

  cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest number
  cout << bigger << endl;
  cout<<"Thank you for playing.\n";
  
  return 0;
}
