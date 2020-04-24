#ifndef __PASSARRAY_H__
#define __PASSARRAY_H__
#include "Password.h"

using namespace std;

class PassArray{
  private:
  int n;
  Password *arr;
  Password *p;

  public:
  PassArray(){
    n = rand() % 6 + 5;
    arr = new Password[n];
  }

  void generateData(){
    for(int i = 0; i < n; i ++){
      p = new Password();
      arr[i] = *p;
    }
  }

  void areTheySafe(){
    for(int i = 0; i<n ;i++){
      if(arr[i].isSafe() == true){
        cout << arr[i].getPassword() << " es V";
      }else {
        cout << arr[i].getPassword() << " es F";
      }
      cout << endl;
    }
  }

};

#endif