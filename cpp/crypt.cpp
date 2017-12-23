#include <map>
#include <string>
#include <fstream>

std::map<std::string, std::string> get_descriptions(std::string input) {
  std::map<std::string, std::string> r;
  std::string key;
  std::stringbuf value;
  std::ifstream infile(input);
  std::string line;
  while (std::getline(infile, line)) {
  }
  return r;
}

int main () {
  return 0;
}
