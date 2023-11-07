// Ethan Smith
// ethanmsmith@csu.fullerton.edu
// @ethanmsmith4
// Partners @Sky-Christian @kaleossari123

#include <iostream>
#include <string>
#include <vector>

<<<<<<< HEAD
 int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
=======
int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
>>>>>>> e33ff6c (Fixed the header.)
  int expected_argument{4};
  if (arguments.size() != expected_argument) {
    std::cout << "error: you must supply three arguments";
    return 1;
  }
  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};
<<<<<<< HEAD
=======

  std::cout << "What type of protein would you like? : " << protein << "\n";
  std::cout << "What type of bread would you like? : " << bread << "\n";
  std::cout << "what condiment would you like? : " << condiment << "\n";
  std::cout << "Your order: " << std::endl;
  std::cout << "A " << protein << " sandwich on " << bread << " with "
            << condiment << "." << std::endl;
  return 0;
}
  // TODO: Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.

  // TODO: Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.

  // TODO: Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.
>>>>>>> e33ff6c (Fixed the header.)

  std::cout << "What type of protein would you like? : " << protein << "\n";
  std::cout << "What type of bread would you like? : " << bread << "\n";
  std::cout << "what condiment would you like? : " << condiment << "\n";
  std::cout << "Your order: " << std::endl;
  std::cout << "A " << protein << " sandwich on " << bread << " with "
            << condiment << "." << std::endl;
  return 0;
}