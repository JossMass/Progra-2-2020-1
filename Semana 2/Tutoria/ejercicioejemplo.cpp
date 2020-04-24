#include <iostream>
#include <string>

using namespace std;

class Cuenta{
  private:
  string titular;
  double cantidad;

  public:
  Cuenta(string titular, double _cantidad){
    this-> titular = titular;
    cantidad = _cantidad;
  }

  Cuenta(string titular){
    this-> titular = titular;
    cantidad = 0;
  }

  //Getters y Setters
  string getTitular(){ return titular; }
  void setTitular(string v) { titular = v; }
  double getCantidad(){ return cantidad; }
  void setCantidad(double v) { cantidad = v; }

  void ingresar(double cant){
    if(cant >= 0){
      cantidad += cant;
    }  
  }

  void retirar(double cant){
    cantidad -= cant;
    if(cantidad < 0) cantidad = 0;
  }

};

int main() {

  Cuenta *c;
  c = new Cuenta("Jose",100);
  c->ingresar(20);
  c->retirar(40);
  cout << "En la cuenta queda: " << c->getCantidad();

}