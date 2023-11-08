// Ethan Smith
// ethanmsmith@csu.fullerton.edu
// @ethanmsmith4
// Partners: @Sky-Christian @kaleossari123

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (argc < 2) {
    std::cout << "error: you must supply at least one number" << std::endl;
    return 1;
  }

  double sum = 0.0;
  int argCount = 0;

  for (int i = 1; i < argc; ++i) {
    try {
      double num = std::stod(argv[i]);
      sum += num;
      argCount++;
    } catch (const
    std::invalid_argument& e) {
                std::cerr << "invalid argument:
    " << argv[i] << std::endl;
                return1;
            } catch (const std::out_of_range& e)
  {
                std::cerr << "out of range
  argument: " << argv[i] << std::endl;
                return 1;
          }
      }

      if (argCount == 0) {
        std::cout << "error: no valid arguments
        to sum." << std::endl;
            return 1;
      }

      double average = sum / argCount;

      std::cout << "sum of command line
      arguments: " << sum << std::endl;
          std::cout << "average of command line
          arguments: " << average << std::endl;

        std::cout << "Average = " << average << std::endl;

  return 0;
}