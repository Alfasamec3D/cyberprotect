#include "machine.hpp"
int main() {
  InferenceMachine machine;

  // Setting variables
  machine.addVariable("A", true);
  machine.addVariable("B", false);
  machine.addVariable("C", false);

  // Rules examples
  Rule r1;
  r1.condition = {{"A", true}};
  r1.action = {{"B", true}};

  Rule r2;
  r2.condition = {{"B", true}};
  r2.action = {{"C", true}};

  machine.addRule(r1);
  machine.addRule(r2);

  machine.run();

  std::cout << "Итоговые значения переменных:" << std::endl;
  machine.printVariables();

  return 0;
}