#ifndef SPORTS_H_INCLUDED
#define SPORTS_H_INCLUDED
using namespace std;


 class adherent
{
    protected:

        string refe;
        string nom_sport;

        public:

    string getRef();              ,
    string getSportName();


    void setRef(string refe);
    void setSportName(string nom_sport);


       };



#endif // SPORTS_H_INCLUDED
