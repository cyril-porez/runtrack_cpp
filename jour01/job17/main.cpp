#include <iostream>
#include <cstdlib>
#include <ctime>

enum Specialite {
  IA, 
  Web, 
  Logiciel,
  SystèmeImmersif, 
  Cybersécurité
};

void afficherSpecialite(Specialite specialite) 
{
    switch (specialite)
    {
    case IA:
      std::cout << "IA";
      break;
    case Web:
      std::cout << "Web";
      break;
    case Logiciel:
      std::cout << "Logiciel";
      break;
    case SystèmeImmersif:
      std::cout << "Système Immersif";
      break;
    case Cybersécurité:
      std::cout << "Cybersécurité";
      break;
    default:
      break;
    }
}

void afficherNbrStudentBySpe(Specialite specialite, int nbrStudent)
{
  afficherSpecialite(specialite);
  std::cout << " nombre d'étudiant : " << nbrStudent <<std::endl;
}


int main()
{
  std::srand(std::time(nullptr));
  // 12 permet de décaler la position de départ et le calcul permet de déterminer le nombre de valeur possible

  int nbrStudentBySpe[5];

  for(int  i = 0; i < 5; i++)
  {
    nbrStudentBySpe[i] = 12 + rand()% (66 - 12 + 1);
  }

  for (int i = 0; i < 5; i++)
  {
    afficherNbrStudentBySpe(static_cast<Specialite>(i), nbrStudentBySpe[i]);
  }
  
  afficherSpecialite(Web);
  return 0;
}