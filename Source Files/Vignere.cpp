#include <iostream>
#include "decrypt.h"
#include "encrypt.h"

using namespace std;

int main() {
  string choice;    //choice of user
  string plnText;    //plain text to encrypt/decrypt
  string key;    //key used to encrypt/decrypt
  cout << "Welcome to the Vigenere Cipher Decryption program by Joseph Caraan.\n\n";
  cout << "Enter 1 to encrypt or 2 to decrypt text (with no spaces or symbols): ";
  cin >> choice;
  while(choice != "1" && choice != "2"){
    cout << "ERROR. Please enter either 1 to encrypt to 2 to decrypt: ";
    cin >> choice;
  }
  if(choice == "1"){    //encryption
    cout << "Enter text that you wish to encrypt: ";
    cin >> plnText;
    cout << "Enter the key that you wish to use to encrypt your text: ";
    cin >> key;
    for(int i=0;i<plnText.size();i++) plnText[i] = toupper(plnText[i]);    //make sure lowercase strings are made uppercase
    for(int i=0;i<key.size();i++) key[i] = toupper(key[i]);    
    cout << "Encrypted text: " << encrypt(plnText,key) << endl;
  }
  else{    //decryption
    cout << "Enter text that you wish to decrypt: ";
    cin >> plnText;
    cout << "Enter the key that you wish to use to decrypt your text: ";
    cin >> key;
    for(int i=0;i<plnText.size();i++) plnText[i] = toupper(plnText[i]);
    for(int i=0;i<key.size();i++) key[i] = toupper(key[i]);
    cout << "Decrypted text: " << decrypt(plnText,key) << endl;
  }
  return 0;
}