#include <iostream>
#include "Aquatique.cpp"
#include "Terrestre.cpp"

class Pinguin : public Aquatique , public Terrestre {
    
  private:
    std::string  name;
    double vitesseGlisse;

  public:
    Pinguin(const std::string& name, double vitesse) : name(name), vitesseGlisse(vitesse){};
    Pinguin(const Pinguin& copy) : Aquatique(copy), Terrestre(copy), name(copy.name), vitesseGlisse(copy.vitesseGlisse)
    {
      std::cout << "Constructeur de copie appele pour " << name << std::endl;
    }

    void sePresenter() 
    {
      std::cout << "Je m'appelle " << name; 
    }

    void setVitesseGlisse(double vitesse)
    {
      vitesseGlisse = vitesse;
    }

    double getVitesseGlisse() 
    {
      return vitesseGlisse;
    }


};

int main() {
  Pinguin pinguin("JOE", 12.3);
  Pinguin pinguinCopy = pinguin;
  pinguinCopy.sePresenter();
  std::cout <<std::endl << pinguinCopy.getVitesseGlisse() << std::endl;
  pinguinCopy.setVitesseGlisse(50.2);
  std::cout << pinguinCopy.getVitesseGlisse() << std::endl;

  return 0;
  
}