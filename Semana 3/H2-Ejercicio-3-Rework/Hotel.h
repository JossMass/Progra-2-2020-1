#ifndef __HOTEL_H__
#define __HOTEL_H__

#include <string>
using namespace std;

string hotelLocations[7] = {"Isla de la Cite", "San Luis","Barrio Latino", "Montmartre", "La Defensa", "Campos Eliseos", "Plaza de la concordia" };

string hotelNames[7] = { "Marriot", "Shell", "Portman", " Winston","Paris","Trivago","Casa Andina" };

class Hotel{
  private:
  string name;
  int stars;
  string location;
  bool breakfast;
  int telephone;
  bool airportService;

  public:
  Hotel(){
    name = hotelNames[rand()%7];
    stars = rand() % 5 + 1;
    location = hotelLocations[rand()%7];
    breakfast = rand() % 2;
    telephone = rand()% 8000000 + 1000000;
    airportService = rand() % 2;
  }
  ~Hotel(){}

  //Gets OBTENER INFORMACION
  string getName(){ return name; }
  int getStars() { return stars; }
  string getLocation() { return location; }
  bool getBreakfast() { return breakfast; }
  int getTelephone(){ return telephone; }
  bool getAirportService(){return airportService; }

  //Sets MODIFICAR Y/O ASIGNAR VALORES
  void setName(string v){ name = v;}
  void setStars(int v) {stars = v;}
  void setLocation(string v) {location = v;}
  void setBreakfast(bool v) {breakfast = v;}
  void setTelephone(int v) {telephone = v;}
  void setAiportService(bool v) {airportService = v;}

  void getInformation(){
    cout << "Name: " << name << endl;
    cout << "Stars: " << stars << endl;
    cout << "Location: " << location << endl;
    cout << "Breakfast: ";
    if(breakfast){
      cout << "YES" << endl;
    }else { cout << "NO" << endl; }
    cout << "Telephone: " << telephone << endl;
    cout << "Airport Service: ";
    if(airportService){
      cout << "YES" << endl;
    }else { cout << "NO" << endl; }
    cout << endl;

  }

};

#endif