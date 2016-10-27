#include <iostream>

using namespace std;

int main()
{
   unique_ptr<int>      still_playing   (new int(1));
   unique_ptr<string>   user_choice     (new string());
   
   while(*still_playing ==  1)
   {
       have_a_game();
       
       cout    << "\nWould you like to play again? (Y/N)\n>>>  ";
       cin     >> *user_choice;
       
       (*user_choice == "y" || *user_choice == "Y") ? (cout << "Okay, another round then.") : (*still_playing = 0);
   }
   return 0;
}

