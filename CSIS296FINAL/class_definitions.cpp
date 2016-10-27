
#include <string>
#include <memory>
#define DEFAULT "JAKE"
#include "generic_class.h"

using namespace std;
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//  CTOR NO ARG       : PLAYER
myclass_player::myclass_player()
{
    /*  Initialize smart pointer  */
  unique_ptr<string> ptr(new string());
  
    /*  Gather name from user  */
  cout  << "\nPlease enter your name\n>>>";
  cin   >> *ptr;
  
    /*  Do work for user if they're too lazy  */
  *ptr != "\n" ? (this  -> name_ = *ptr) : (this  -> name_ = DEFAULT);
  
    /*  Greet user  */
  cout  << "\nWelcome, "
        << this -> name_
        << endl;
}
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//  CTOR WITH ARG     : PLAYER
myclass_player::myclass_player(string* name) : name_(*name)
{
}
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//  DTOR              : PLAYER
myclass_player::~myclass_player()
{
  cout  << "\nGoodbye, "
        << this -> name_
        << endl;
}
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//  PRIMARY_FUNCTION  : PLAYER
void
myclass_player::primary_function(
) {
  cout  << this -> name_
        << ", SURVIVE.\n";
}
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//  
