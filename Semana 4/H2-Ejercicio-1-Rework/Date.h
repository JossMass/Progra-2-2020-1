#ifndef __DATE_H__
#define __DATE_H__

#include <string>

using namespace std;

class Date{
  private:
  int d, m, y;

  public:
  Date(){
    d = rand() % 31;
    m = rand() % 13;
    y = rand() % 2021;
  }

  ~Date(){}

  string getCompleteDate(){
    string aux ;
    aux.append(to_string(d));
    aux.append("/");
    aux.append(to_string(m));
    aux.append("/");
    aux.append(to_string(y));
    
    //dd/mm/yy
    return aux;
  }

};

#endif