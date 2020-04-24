#ifndef __ARRECLIPSE_H__
#define __ARRECLIPSE_H__

#include <vector>
#include "Eclipse.h"

using namespace std;

class ArrEclipse{
  private:
  vector<Eclipse*> arr;

  public:
  ArrEclipse(){}
  ~ArrEclipse(){}

  void addEclipse(){
    Eclipse *e = new Eclipse();
    arr.push_back(e); //add at final position
  }

  void insertEclipse(int position){
    Eclipse *e = new Eclipse();
    arr.insert(arr.begin() + position, e); //insert in position
  }

  void editEclipseType(int position, string v){
    arr.at(position)->setType(v);
  }

  void deleteEclipse(int position){
    arr.erase(arr.begin() + position);
  }

  void deleteLastEclipse(){
    arr.pop_back();
  }

  void printArray(){
    for(int i = 0; i < arr.size(); i++){
      cout << endl;
      cout << "Eclipse " << i << endl;
      arr[i]->printData();
    }
  }

  void eclipsesVisiblesEurope(){
     for(int i = 0; i < arr.size(); i++){
      if(arr[i]->getVisibility() == "Europe"){
        arr.at(i)->printData();
      }
    }
  }

  void eclipsesEarthquakes(){
    for(int i = 0; i < arr.size(); i++){
      if(arr[i]->getEarthquake() == "Yes"){
        arr.at(i)->printData();
      }
    }
  }

  void eclipsesInTheNight(){
    for(int i = 0; i < arr.size(); i++){
      if(arr[i]->getHour() > 18){
        arr.at(i)->printData();
      }
    }
  }

};

#endif