#include <iostream>

int doubeArray(int array[], int sizeArray) 
{
    int *ptr = array;
    int total = 0;

    for (int i = 0; i < sizeArray; i++)
    {
        total = total + ((*(ptr + i)) * 2);
    }
    return total;
}

void printArray(int array[], int sizeArray)
{
    for (int i = 0; i < sizeArray; i++)
    {
      std::cout << array[i] * 2 << std::endl;
    }
}

int main () 
{
  int array[] = {12, 3, 45, 10, 35};
  int sizeArray = sizeof(array) / sizeof(array[0]);

  int total = doubeArray(array, sizeArray);
  std::cout << "valeur total element doublé : " << total << std::endl;

  printArray(array, sizeArray);
  return 0;
}