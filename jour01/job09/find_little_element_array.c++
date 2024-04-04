#include <iostream>
#include<limits>

int sort_array(int array[] , int arrSize) 
{
  int mostLittleValue = std::numeric_limits<int>::max();// attribu la taille max qu'int peut prendre

  for (int i = 0; i < arrSize; i++)
  {
    if (array[i] < mostLittleValue)
    {
      mostLittleValue = array[i];
    }
  }

  return mostLittleValue;
}

int main () {
  int array[] = {1,2,3,4,5}; 
  int sizeArray = sizeof(array) / sizeof(array[1]); // sizeof donne la taille en octet
  int test = sort_array(array, sizeArray);


  std::cout << test;
}