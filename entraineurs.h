#ifndef ENTRAINEURS_H_INCLUDED
#define ENTRAINEURS_H_INCLUDED

using namespace std;

typedef struct date
{
    int jour;
    int mois;
    int an;
};

 class entraineur
{
    protected:
        string num;
        string prenom;
        string nom;
        string tel;
        double salaire;
        double prixhr;
        date date_naissance;
        date date_embauche;
        public:
   string getNumber();
   string getFirstName();
    string getLastName();
    string getPhone();
    string getSalary();
    string getPriceh();
    string getBirthdate();
    string getWorkdate();

    void setLastName(string num);
    void setFirstName(string prenom);
    void setLastName(string nom);
    void setPhone(string tel);
    void setSalary(double salaire);
    void setPriceh(double prixhr);
    void setBirthdate(date date_naissance);
    void setWorkdate(date date_embauche);
};





#endif // ENTRAINEURS_H_INCLUDED
