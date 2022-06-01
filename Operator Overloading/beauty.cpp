#include <iostream>
#include <list>
using namespace std;
class Youtube
{

public:
    string name;
    int Scount;
    Youtube(string n, int Sc)
    {
        name = n;
        Scount = Sc;
    }
    bool operator==(const Youtube &channel)const{
        return this->name==channel.name;
    }
};

ostream &operator<<(ostream &COUT, Youtube &YT101)
{
    COUT << "Name : " << YT101.name << endl;
    COUT << "SUBcribers : " << YT101.Scount << endl;
    return COUT;
}

class Mycollection
{
public:
    list<Youtube> mychannels;

    void operator+=(Youtube &y)
    {
        this->mychannels.push_back(y);
    }

    void operator-=(Youtube &y1){
        this->mychannels.remove(y1);
    }
};



ostream&operator<<(ostream&COUT,Mycollection &myC){
   for(Youtube ytChannel : myC.mychannels)
   COUT<<ytChannel;
   return COUT;
}
int main()
{
    Youtube yt("Tausif", 1000);
    Youtube yt1("Arnab", 500);
    Youtube yt3("Ayaz",500);
    /* cout<<yt<<yt1;//For fix the situation need to set the type ostream& */

    // operator<<(cout,yt);

    Mycollection m;
    m += yt;
    m+=yt1;
    m+=yt3;
    
   cout<<m<<endl;

  cout<< "Removing channel 3" <<endl;
    m-=yt3;
   cout<<m<<endl;

    cout << "Hi " << endl;
    return 0;
}