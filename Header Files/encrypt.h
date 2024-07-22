#ifndef ENCRYPT_H
#define ENCRYPT_H
#include <string>

using namespace std;

string encrypt(string inp,string key){
  string enc = "";
  int charToInt1;
  int charToInt2;
  int j = 0;
  for(int i=0;i<inp.size();i++){
    charToInt1 = int(inp[i])-65;   //row index Pi
    charToInt2 = int(key[j])-65;   //col index Ki
    j++;
    if(key[j]=='\0') j = 0;
    char c = char((charToInt1+charToInt2) % 26 + 65);    //+65 to fit right char on ascii
    enc += c;
  }
  return enc;
}

#endif /* ENCRYPT_H */