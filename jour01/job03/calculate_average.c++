#include <iostream>
using namespace std;

int main() 
{
  int nbr = 0;
  double average = 0;

  for (int i = 0; i < 5; i++) {
    cout <<"Veuillez entrer 1 nombre !";
    cin >>nbr;
    average = average + nbr;
  }

  average = average / 5;
  cout << "test:" << average;

  return 0;
}