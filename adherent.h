#ifndef INSCRIPTION_H_INCLUDED
#define INSCRIPTION_H_INCLUDED

using namespace std;

typedef struct date
{
    int jour;
    int mois;
    int an;
};

 class adherent
{
    protected:
        string id;
        string prenom;
        string nom;
        string tel;
        date date_naissance;
        date date_adhesion;

        public:

    string getId();
    string getFirstName();
    string getLastName();
    string getPhone();
    date getBirthDate();
    date getMembershipDate();

    void setLastName(string id);
    void setFirstName(string prenom);
    void setLastName(string nom);
    void setPhone(string tel);
    void setBirthDate(date date_naissance);
    void setMembershipDate(date date_adhesion);

       };



#endif // INSCRIPTION_H_INCLUDED
