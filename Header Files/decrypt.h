#ifndef DECRYPT_H
#define DECRYPT_H
#include <string>

using namespace std;

string decrypt(string inp,string key){
  string dec = "";
  int charToInt1;
  int charToInt2;
  int j = 0;
  for(int i=0;i<inp.size();i++){
    charToInt1 = int(inp[i])-65;    //Ei
    charToInt2 = int(key[j])-65;    //Ki
    j++;
    if(key[j]=='\0') j = 0;
    char c = char((charToInt1 - charToInt2 + 26) % 26 + 65);    //+65 to fit on ascii again, given on project directions
    dec += c;
  }
  return dec;
}

#endif /* DECRYPT_H */