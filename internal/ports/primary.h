namespace Ports {

struct APIPort {
  virtual int GetAddition(int a, int b) = 0;
  virtual int GetSubtraction(int a, int b) = 0;
  virtual int GetMultiplication(int a, int b) = 0;
  virtual int GetDivision(int a, int b) = 0;
  virtual inline ~APIPort() = 0;
};
APIPort::~APIPort(){};
} // namespace Ports
