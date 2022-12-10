#include "../api/api.h"
#include "../../ports/primary.h"
#include "../../ports/secondary.h"

namespace Api {

class Application : public Ports::APIPort {
public:
  int GetAddition(int a, int b) override  { return a + b; }
  int GetSubtraction(int a, int b) override { return a - b; }
  int GetMultiplication(int a, int b) override { return a * b; }
  int GetDivision(int a, int b) override { return a / b; }
  Application(Ports::DBPort db, Api::Arithmetic arith) {

    this -> db = db;
    this -> arith = arith;
  }; 


private:
  Ports::DBPort db;
  Api::Arithmetic arith;
};
} // namespace Api
