#include<iostream>
using namespace std ; 
/*           Refer harry 39 no video .
    
                          Public derivation                Private Derivation               Protected Derivation    

1. Private members          Not inherited                    not inherited                     not inherited
2. Protected members         Protected                        Private                          Protected
3. Public members            Public                           Private                          Protected
*/
 class Base {
     protected:
     int a;
     private:
     int b;
    
 };

 class Derived: protected Base{
   

 };


int main () {
    
    

    return 0;
}