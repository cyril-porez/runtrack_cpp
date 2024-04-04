#include <iostream>
#include <cstring>

void MySortString(const char** array, int sizeArray)
{
    for (int i = 0; i < sizeArray - 1; i++)
    {
        for (int j = i + 1; j < sizeArray; j++)
        {
            if (strcmp(array[i], array[j]) > 0)
            {
              const char* tmp = array[i];
              array[i] = array[j];
              array[j] = tmp;
            }
        }
    }
    
}

int main()
{
    const char* arrayWord[] = {"banane", "citron", "tomate", "légume"};
    int sizeArray = sizeof(arrayWord) / sizeof(arrayWord[0]);
    
    MySortString(arrayWord, sizeArray);

    for (int i = 0; i < sizeArray; i++)
    {
      std::cout << arrayWord[i] << std::endl;
    }
    

    std::cout << strcmp("test", "acse") << std::endl;
}