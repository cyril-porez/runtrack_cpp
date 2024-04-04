#include <iostream>

void addElement(int*& array, int &size, int addElement)
{
    int* newArray = new int[size + 1];

    for (int i = 0; i < size; i++)
    {
        newArray[i] = array[i];
    }
    
    newArray[size] = addElement;

    delete[] array; 
    array = newArray;   
    size++;  
}

void showTable(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << std::endl;
    }
}

int main()
{
    int size = 5;
    int* array = new int[size]{};

    addElement(array, size, 1);
    // addElement(array, size, 1);
    // addElement(array, size, 1);
    // addElement(array, size, 1);
    // addElement(array, size, 1);
    // addElement(array, size, 1);
   
    showTable(array, size);
}