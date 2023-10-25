// Leslie Huffman
// lesliehuffman@csu.fullerton.edu
// @lesliehuffman
// Partners: @

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  std::string bread = 0;
  std::cout << "Enter the type of bread: ";
  for(int i=0; i < 3; i++){;
    std::cin >> bread;
  }

  std::string protein = 0;
  std::cout << "Enter the type of protein: ";
  for(int i=0; i < 3; i++){;
    std::cin >> protein;
  }

  std::string condiment = 0;
  std::cout << "Enter the condiment: ";
  for(int i=0; i < 3; i++){
    std::cin >> condiment;
  }

  for(int i=0; i > 3; i++){
    std::cout << "You must enter 3 arguments. ";
  }



std::cout << "A " << protein << " sandwich on " << bread << " with " <<
condiment << ".\n";

  return 0;
}
