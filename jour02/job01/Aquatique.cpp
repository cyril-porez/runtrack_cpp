#include <iostream>

class Aquatique {
  private:
    double vitesseNage;
  
  public: 

    Aquatique() {}

    
    virtual void nager() 
    {
        std::cout << "Vous nager !!";
    } 
    

};