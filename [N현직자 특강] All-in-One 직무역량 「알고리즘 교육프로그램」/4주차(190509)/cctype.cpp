#include <iostream>
#include <cctype>

using namespace std;

int main ()
{
  int i;
  char str[]="c3po...";
  i=0;
  while (isalnum(str[i])) 
    i++;
  cout << "The first " << i << " characters are alphanumeric" << endl;
  
  i=0;
  char str2[]="Test String.\n";
  char c;
  while (str2[i]) {
    c=str2[i];
    if (islower(c)) c=toupper(c);
    putchar (c);
    i++;
  }
  
  return 0;
}
 

