#include <iostream>


int main()
{
  int year;

  std::cout << "Veuiller entrer une année ! ";
  std::cin >> year;

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
  {   
    std::cout << "l'année est bissextile  !\n";
  }
  else 
  {
    std::cout << "l'année n'est pas bissextile\n";
  }
}