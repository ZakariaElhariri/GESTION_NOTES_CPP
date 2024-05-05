  /*#include <iostream>
#include <string>
#include "Personne.h"
#include "Etudiant.h"
#include "Note.h"
#include "Cours.h"
#include "Enseignant.h"
#include "Classe.h"
using namespace std;
int main()    
{
    Etudiant etu("a","b","c","d","e","f");
    Note no("examen", 15.77);
    cout << no.get_type_note() << "\t" << no.get_note() << endl;
    no.set_note(22.77);
    no.set_type_note("pas examen");
    cout << no.get_type_note()<<"\t" << no.get_note() << endl;
    Classe cl("e", "e", 2.3);
    cout <<"get coeff:   " << cl.get_coefficient() << endl;
    cout << "MOHAMMED BOUGTAB";
    
    
    return 0;
}
*/

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <algorithm>
#include "Classe.h"
#include "Cours.h"
#include "Personne.h"
#include "Note.h"
#include "Etudiant.h"
#include "Enseignant.h"

using namespace std;
int main() {
    deque <Classe> classes;
    list <Cours> cours;
    
    int choix;
    do {
        cout << "\nMenu Principal" << endl;
        cout << "1. Gestion de Classe" << endl;
        cout << "2. Gestion de Cours" << endl;
        cout << "3. Gestion d'Etudiant" << endl;
        cout << "4. Quitter" << endl;
        cout << "Choix : ";
        cin >> choix;

        switch (choix) {
        case 1: {
            // Fonctionnalité 1 : Gestion de Classe
            cout << "\n** Gestion de Classe **" << endl;

            // a. Ajouter une classe dans le std::deque
            string id, nomClasse;
            float niveau;
            cout << "Entrez l'ID de la classe : ";
            cin >> id;
            cout << "Entrez le nom de la classe : ";
            cin >> nomClasse;
            cout << "Entrez le niveau de la classe : ";
            cin >> niveau;

            classes.emplace_front(id, nomClasse, niveau);
            // b. Afficher le nombre d'étudiants de chaque classe
            for ( auto& classe : classes) {
                cout << "Classe " << classe.get_nom_classe()  << " : " << classe.getNbEtudiants() << " étudiant(s)" << std::endl;
            }

            // c. Ajouter/Modifier/Supprimer un étudiant dans une classe
            string matricule;
            int action;
            cout << "Entrez l'ID de la classe où vous souhaitez effectuer l'action : ";
            cin >> id;
            auto it = find_if(classes.begin(), classes.end(), [&id]( Classe& c) { return c.get_id_classe()  == id; });
            if (it != classes.end()) {

                std::cout << "1. Ajouter un étudiant" << std::endl;
                std::cout << "2. Modifier un étudiant" << std::endl;
                std::cout << "3. Supprimer un étudiant" << std::endl;
                std::cout << "Action : ";
                std::cin >> action;

                switch (action) {
                case 1:
                    // Ajouter un nouvel étudiant à la classe
                    
                    break;
                case 2:
                    // Modifier un étudiant existant dans la classe
                    // Code à compléter pour modifier un étudiant dans la classe
                    break;
                case 3:
                    // Supprimer un étudiant de la classe
                    // Code à compléter pour supprimer un étudiant de la classe
                    break;
                default:
                    std::cout << "Action invalide." << std::endl;
                }
            }
            else {
                std::cout << "Classe non trouvée." << std::endl;
            }

            break;
        }
        case 2: {
            // Fonctionnalité 2 : Gestion de Cours
            std::cout << "\n** Gestion de Cours **" << std::endl;

            // a. Ajouter un cours dans la liste std::list
            // Code à compléter pour ajouter un cours dans la liste

            // b. Trier la liste des cours
            // Code à compléter pour trier la liste des cours

            // c. Ajouter/Modifier/Supprimer une note d'un cours
            // Code à compléter pour gérer les notes d'un cours

            break;
        }
        case 3: {
            // Fonctionnalité 3 : Gestion d'Etudiant
            std::cout << "\n** Gestion d'Etudiant **" << std::endl;

            // a. Remplir le std::map avec les étudiants
            // Code à compléter pour remplir le std::map avec les étudiants

            // b. Ajouter une note à un étudiant
            // Code à compléter pour ajouter une note à un étudiant du std::map

            // c. Trier la liste des notes par ordre décroissant
            // Code à compléter pour trier la liste des notes

            // d. Ajouter 1.5 aux notes inférieures à 9.5
            // Code à compléter pour ajuster les notes inférieures à 9.5

            // e. Supprimer un étudiant du std::map
            // Code à compléter pour supprimer un étudiant du std::map

            // f. Afficher le bulletin de chaque étudiant
            // Code à compléter pour afficher le bulletin de chaque étudiant

            // g. Afficher le nombre d'étudiants dont la moyenne est inférieure à 9
            // Code à compléter pour compter et afficher le nombre d'étudiants

            // h. Afficher la moyenne de chaque étudiant et la moyenne de la classe
            // Code à compléter pour calculer et afficher les moyennes

            break;
        }
        case 4:
            std::cout << "Programme terminé." << std::endl;
            break;
        default:
            std::cout << "Choix invalide. Veuillez réessayer." << std::endl;
        }
        
    } while (choix != 4);

    return 0;
}
