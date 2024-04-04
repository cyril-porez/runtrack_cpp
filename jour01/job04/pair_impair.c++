#include <iostream>

int main() 
{
  int nbr = 0;
  std::cout <<"Veuillez entrer un nombre ! ";
  std::cin >> nbr;

  if (nbr % 2 == 0)
  {
    std::cout << "Le nombre pair !";
  }
  else 
  {
    std::cout << "le nombre est impair !";
  }

  return 0;
}