#ifndef __HOTELARRAY_H__
#define __HOTELARRAY_H__

#include "Hotel.h"
using namespace std;

class HotelArray{
  private:
  int n;
  int index;
  //Arreglo dinamico que almacena objetos dinamicos
  Hotel **arr; 
  Hotel *h;

  public:
  HotelArray(int _n){
    index = 0;
    n = _n;
    arr = new Hotel*[n];
  }
  ~HotelArray(){}

  //CRUD Operations
  //Create / Read / Update / Delete
  //Anadir / Leer / Modificar / Eliminar

  void addHotel(){
    if(index < n){
      h = new Hotel();
      arr[index] = h;
      index++;
    }
  }

  void editHotelName(string newName, int position){
    for(int i = 0; i < index; i++){
      if(i == position){
        arr[i]->setName(newName);
      }
    }
  }

  void removeHotel(int position){
    for(int i = 0; i < index; i++){
      if(i == position){
        for(int j = position; j < index; j++){
          arr[j] = arr[j+1];
        }
      }
    }
    index--;
  }

  void printData(){
    for(int i = 0; i < index; i++){
      cout << "Hotel " << i << endl;
      arr[i]->getInformation();
    }
  }

  void printCamposEliseos(){
    for(int i=0; i<index;i++){
      if(arr[i]->getLocation() == "Campos Eliseos"){
        arr[i] -> getInformation();
      }
    }
  }

  void printBreakfast(){
    for(int i=0; i<index;i++){
      if(arr[i]->getBreakfast()){
        arr[i] -> getInformation();
      }
    }
  }

   void printAirportService(){
    for(int i=0; i<index;i++){
      if(arr[i]->getAirportService()){
        arr[i] -> getInformation();
      }
    }
  }





};

#endif