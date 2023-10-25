// TODO: Add the required header

#include <iostream>
#include <string>
#include <vector>

 int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  int expected_argument{4};
  if (arguments.size() != expected_argument) {
    std::cout << "error: you must supply three arguments";
    return 1;
  }
  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};

  std::cout << "What type of protein would you like? : " << protein << "\n";
  std::cout << "What type of bread would you like? : " << bread << "\n";
  std::cout << "what condiment would you like? : " << condiment << "\n";
  std::cout << "Your order: " << std::endl;
  std::cout << "A " << protein << " sandwich on " << bread << " with "
            << condiment << "." << std::endl;
  return 0;
}