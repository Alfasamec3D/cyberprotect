#include "machine.hpp"
bool testRun() {
  InferenceMachine machine;
  machine.addVariable("A", true);
  machine.addVariable("B", false);
  machine.addVariable("C", false);
  Rule r1;
  r1.condition = {{"A", true}};
  r1.action = {{"B", true}};
  Rule r2;
  r2.condition = {{"B", true}};
  r2.action = {{"C", true}};
  machine.addRule(r1);
  machine.addRule(r2);
  machine.run();
  return machine.variables["A"] && machine.variables["B"] &&
         machine.variables["C"];
}
int main() { return !testRun(); }