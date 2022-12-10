#include <string>
namespace Ports {

struct DBPort {
  void CloseDBConnection();
  void AddToHistory(int answer, std::string op);
};

} // namespace Ports
