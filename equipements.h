#ifndef EQUIPEMENTS_H_INCLUDED
#define EQUIPEMENTS_H_INCLUDED

using namespace std;

typedef struct date
{
    int jour;
    int mois;
    int an;
};

 class equipements
{
    protected:
        string refe;
        string libelle;
        string nom;
        string prix;
        date date_achat;
         public:

    string getRefe();
    string getLibelle();
    string getName();
    string getPrice();
    string getPurchaseDate();


    void setRefe(string refe);
    void setLibelle(string libelle);
    void setName(string nom);
    void setPrice(string prix);
    void setPurchaseDate(date date_achat);


       };


#endif // EQUIPEMENTS_H_INCLUDED
