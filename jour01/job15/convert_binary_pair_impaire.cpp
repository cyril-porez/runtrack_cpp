#include <iostream>
#include <bitset>

bool binaryPair(unsigned int nbr)
{
    bool boolean;
    size_t binary  = std::bitset<8>(nbr).count();
    std::cout << binary << std::endl;

    binary % 2 == 0 ? boolean = true : boolean = false; 
    return boolean;
}

int main ()
{
  bool boolean =  binaryPair(126);
  std::cout << "le nombre de bit à 1 est : " << boolean;
}