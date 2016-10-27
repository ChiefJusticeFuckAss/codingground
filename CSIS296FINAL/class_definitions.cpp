
#include <string>
#include <memory>
#define DEFAULT "JAKE"
#include "generic_class.h"

using namespace std;

myclass_player::myclass_player()
{
  unique_ptr<string> ptr(new string());
  cout  << "\nPlease enter your name\n>>>";
  cin   >> *ptr;
  *ptr != "\n" ? (this  -> name_ = *ptr) : (this  -> name_ = DEFAULT);
  cout  << "\nWelcome, "
        << this -> name_
        << endl;
}

myclass_player::myclass_player(string* name) : name_(*name)
{
}
