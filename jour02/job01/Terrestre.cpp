#include <iostream>

class Terrestre {
  private:
    double vitesseMarche;

  public:
    virtual void marcher()
    {
      std::cout << "je marche";
    }
};