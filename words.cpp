#include <iostream>
#include "words.h"
#include <cstring>
#include <cctype>

using namespace std;

// Checks if the given ch is found in a given string
// If found, that ch is removed from the string
bool char_in_string(char ch, char* str) {
  int length = strlen(str);
  for (int i = 0; i < length; i++) {
    if (toupper(str[i]) == toupper(ch)){
      for(int j = i; j < length; j++) {
      	str[j] = str[j+1];
      }
      return true;
    }
  }
  return false;
}

// Returns true if two strings are anagrams
// Ignores whitespaces, punctuation and capitalisation
bool anagram(const char *str1, const char *str2){
  int length = strlen(str2);
  char copy[length];
  strcpy(copy, str2);
  
  // go through the first string
  while (*str1 != '\0') {
    // Skip to the next one if character is not alphabet and 
    // it is not the sentinel character
    while (!isalpha(*str1) && *str1 != '\0')
      str1++;
    if (*str1 == '\0')
      return true;
    if (!char_in_string(*str1, copy)){
      return false;
    }
    else
      str1++;
  }
  return true;
}

// Returns true if a string is a palindrome
// Ignores whitespaces, punctuation and capitalisation
bool palindrome(const char *str){
  int length = strlen(str);
  char reversed[length + 1];
  reverse(str, reversed);
  if (compare(str, reversed)) 
    return true;
  else
    return false;
}

// Compares two strings and returns true it they are a match
// Ignores whitespaces, capitalisation and punctuation
bool compare(const char *str1, const char *str2){
  while (!isalpha(*str1) && *str1 != '\0')
    str1++;
  
  while (!isalpha(*str2) && *str2 != '\0')
    str2++;
  
  if (*str1 == '\0' && *str2 == '\0') {
    return true;
  }
  if (toupper(*str1) != toupper(*str2))
    return false;
  else 
    return compare(str1 + 1, str2 + 1);
}

// Reverses str1 and stores it in str2
void reverse(const char *str1, char *str2){
  int length = strlen(str1);
  for(int i = length - 1, j = 0; i >=0 &&j < length; i--, j++){
    str2[j] = str1[i];
  }
  str2[length] = '\0';
}
