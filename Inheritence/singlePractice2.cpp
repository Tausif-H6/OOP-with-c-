#include<iostream>
using namespace std ; 

class Book {
    int page=0;
    string name;
    public:
    int countPage(int pageNumber){
        page=page+pageNumber;
        return page;
    }
    string getName(string n){
        name=n;
        return name;
    }


};

class BookShop : private Book{
   int wholeBookSize = countPage(100)*2 ;
  public:
   void display(){
      cout<<"Name of the book "<< getName("Tausif's book")<<" Books page "<< wholeBookSize<<endl;
   }
};



int main () {
    BookShop bs;
    bs.display();
    return 0;
}