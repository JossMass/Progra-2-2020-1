#include <iostream>
#include <cstdlib>
#include <ctime>

#include "PassArray.h"

using namespace std;

int main() {
  srand(time(NULL));
  PassArray *p = new PassArray();
  p->generateData();
  p->areTheySafe();  
}