#include <iostream>

void swapValues(int &val1, int &val2)
{
  int tmp = val1;
  val1 = val2;
  val2 = tmp; 
}

int main()
{
  int val1 = 5, val2 = 10;

  std::cout << "val1 vaut : " << val1 << " val2 vaut : " << val2 << std::endl;
  swapValues(val1, val2);
  std::cout << "val1 vaut : " << val1 << " val2 vaut : " << val2 << std::endl;
}