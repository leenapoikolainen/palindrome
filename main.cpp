#include <iostream>
#include "words.h"

using namespace std;

int main() {

  // QUESTION 1
  cout << "/*** QUESTION 1 ***/" << endl << endl;

  char reversed[9];
  reverse("lairepmi", reversed);
  cout << "'lairepmi' reversed is '" << reversed << "'" << endl;
  reverse("desserts", reversed);
  cout << "'desserts' reversed is '" << reversed << "'" << endl << endl;

  // QUESTION 2
  cout << "/*** QUESTION 2 ***/" << endl << endl;

  cout << "The strings 'this, and THAT......' and 'THIS and THAT!!!' are ";
  if (!compare("this, and THAT......", "THIS and THAT!!!"))
    cout << "NOT ";
  cout << "the same" << endl << "  (ignoring punctuation and case)" << endl;
  
  cout << "The strings 'this, and THAT' and 'THIS, but not that' are ";
  if (!compare("this, and THAT", "THIS, but not that")) 
    cout << "NOT ";
  cout << "the same" << endl << "  (ignoring punctuation and case)" << endl << endl;

  // QUESTION 3
  cout << "/*** QUESTION 3 ***/" << endl << endl;
 
  cout << "The string 'rotor' is ";
  if (!palindrome("rotor"))
    cout << "NOT ";
  cout << "a palindrome." << endl;

  cout << "The string 'Madam I'm adam' is ";
  if (!palindrome("Madam I'm adam"))
    cout << "NOT ";
  cout << "a palindrome." << endl;
  cout << "The string 'Madam I'm not adam' is ";
  if (!palindrome("Madam I'm not adam"))
    cout << "NOT ";
  cout << "a palindrome." << endl << endl;

  // QUESTION 4
  cout << "/*** QUESTION 4 ***/" << endl << endl;

  cout << "The string 'I am a weakish speller!' is ";
  if (!anagram("I am a weakish speller!", "William Shakespeare"))
    cout << "NOT ";
  cout << "an anagram of 'William Shakespeare'" << endl;

  cout << "The string 'I am a good speller!' is ";
  if (!anagram("I am a good speller!", "William Shakespeare"))
    cout << "NOT ";
  cout << "an anagram of 'William Shakespeare'" << endl;

  return 0;
}
