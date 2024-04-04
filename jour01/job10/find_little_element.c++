#include <iostream>
#include<limits>


int find_little_element_sort(int* array[], int sizeArray)
{
  int littleElement = std::numeric_limits<int>::max();

  for (int i = 0; i < sizeArray; i++)
  {
    if (*array[i] < littleElement) {
      littleElement = *array[i];
    }
  }  

  return littleElement;
}

int main ()
{  
  int value1 = 1, value2 = 2, value3 = 3;
  int* array[] = {&value1, &value2, &value3};

  int sizeArray = sizeof(array) / sizeof(array[0]) ;
  int littleElementArray = find_little_element_sort(array, sizeArray);

  std::cout << "Plus petit élément du tableau : " << littleElementArray <<std::endl;

  return 0;
}