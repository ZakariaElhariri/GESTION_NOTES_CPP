#include "Etudiant.h"

using namespace std;


Etudiant::Etudiant(){}
Etudiant::Etudiant(string n, string t, string c, string a, string mat, string an):Personne(n,t,c,a),matricule(mat),annee_entree(an){}
Etudiant::~Etudiant() {}

/*
string Etudiant::Personne::get_nom() { return nom; }
string Etudiant::Personne::get_telephone() { return telephone; }
string Etudiant::Personne::get_cin() { return cin; }
string Etudiant::Personne::get_adresse() { return adresse; }*/
string Etudiant::get_matricule() { return matricule; }
string Etudiant::get_annee_entree() { return annee_entree; }

/*
void Etudiant::Personne::set_nom(string p) { nom = p; }
void Etudiant::Personne::set_telephone(string p) { telephone = p; }
void Etudiant::Personne::set_cin(string p) { cin = p; }
void Etudiant::Personne::set_adresse(string p) { adresse = p; }*/
void Etudiant::set_matricule(string p) { matricule = p; }
void Etudiant::set_annee_entree(string p) { annee_entree = p; }




void Etudiant::ajouter_note(Note* n) { notes.push_back(n); }


    // Méthode pour afficher les détails de l'étudiant et ses notes
    void Etudiant::Bulletin() const {
        cout << "Nom de la classe : " << nomClasse << " - Niveau : " << niveau << endl ; 
        cout << "Matricule étudiant : " << matricule << endl ;
        cout << "Nom étudiant : " << nomEtudiant << endl;
        cout << "Notes :" << endl;
        cout << "Matière\tCoefficient\tType note\tNote" << endl;
        for (const auto& note : Note) {
            cout << note.matiere << "\t" << note.coefficient << "\t\t" << note.type_Note << "\t\t" << note.note << endl;
        }
        cout << "Moyenne : " << calculerMoyenne() << endl;
    }

