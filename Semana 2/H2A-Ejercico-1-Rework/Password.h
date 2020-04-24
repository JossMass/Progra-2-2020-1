#ifndef __PASSWORD_H__
#define __PASSWORD_H__
#include <string>

using namespace std;

char lower[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

char upper[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int numbers[] = {0,1,2,3,4,5,6,7,8,9};

class Password{
  private:
  int lenght;
  string password;
  int nLowers;
  int nUppers;
  int nNumbers;

  public:
  Password(){
    nLowers = 0;
    nUppers = 0;
    nNumbers = 0;
    lenght = 15;
    generatePassword();
  }

  Password(int lenght){
    this->lenght = lenght;
    nLowers = 0;
    nUppers = 0;
    nNumbers = 0;
    generatePassword();
  }
  
  void generatePassword(){
    int r;
    for(int i = 0; i < lenght; i++){
      r = rand() % 3;
      switch(r){
        case 0: password.push_back(lower[rand()%26]);
        nLowers++; break;
        case 1: password.push_back(upper[rand()%26]);
        nUppers++; break;
        case 2: password = password + to_string(numbers[rand()%10]);
        nNumbers++; break;
      }
    }
  }

  bool isSafe(){
    if(nUppers > 2 && nLowers > 1 && nNumbers > 5) return true;
    return false;
  }

  void setLenght(int v){lenght = v;}
  int getLenght(){return lenght;}
  string getPassword(){return password;}


};

#endif