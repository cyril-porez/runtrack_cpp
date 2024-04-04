#include <iostream>
#include <utility>

void my_swap(int &nbr1, int &nbr2) 
{
  int tmp = nbr1;
  nbr1 = nbr2;
  nbr2 = tmp;
}

int main () 
{
    int n = 5;
    int m = 10;

    std::cout << "nbr1 vaut : " << n  << " nbr2 vaut : " << m << "\n";

    my_swap(n, m);

    std::cout << "nbr1 vaut : " << n << " nbr2 vaut : " << m << "\n";

    std::swap(n, m);
    std::cout << "nbr1 vaut : " << n << " nbr2 vaut : " << m << "\n";

    return 0;
} 