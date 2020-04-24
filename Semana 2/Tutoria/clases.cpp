#include <iostream>
#include <string>

using namespace std;

class Persona{
  private:
  //protected
  //atributos
  string name;
  int edad;
  string nacionalidad;

  public:
  //metodos
  Persona(){
    edad = 5;
  }
  Persona(int _edad){
    edad = _edad;
  }

  ~Persona(){}

  //Setters and Getters
  //Get es para obtener datos
  //Set es para otorgar datos
  int getEdad(){
    return edad;
  }

  void setEdad(int v){
    edad = v;
  }
};



int main() {
 int a; //declarando una variable estandar llamada a
 int *b; //declarando una variable dinamica llamada b
 b = new int[10]; //inicializando la variable b
 int *c = new int[10];

 Persona *p; //declarando una variable dinamica de la clase Persona
 p = new Persona(); // inicializando la variable dinamica de la clase persona -> OBJETO

 Persona *j = new Persona();

 cout << p -> getEdad() << endl;
 p ->setEdad(12);
 cout << p -> getEdad() << endl;

}