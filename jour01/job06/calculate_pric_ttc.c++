#include <iostream>

int main ()
{
  double prixHt = 0;
  double prixTtc = 0;

  std::cout << "Veuillez rentrer le prix hors taxe ! ";
  std::cin >> prixHt;

  prixTtc = prixHt + (prixHt * 20/100);

  std::cout << "le prix TTC :" << prixTtc << "\n";

  return 0;
}