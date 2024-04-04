#include <iostream>
#include <string>
#include <algorithm>

int main()
{
  std::string nbr;

  std::cout << "Veuillez entrer un nombre ! [ex: 12345]";
  std::cin >> nbr;
  std::reverse(nbr.begin(), nbr.end());

  std::cout << nbr << "\n";
}