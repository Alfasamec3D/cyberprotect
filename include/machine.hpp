#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

struct Rule {
  // Условие: переменная - ожидаемое значение
  std::unordered_map<std::string, bool> condition;
  // Действие: переменная - присваиваемое значение
  std::unordered_map<std::string, bool> action;
};

class InferenceMachine {
 public:
  std::unordered_map<std::string, bool> variables;
  std::vector<Rule> rules;

  void addVariable(const std::string& name, bool value) {
    variables[name] = value;
  }

  void addRule(const Rule& rule) { rules.push_back(rule); }

  void run();

  void printVariables() const {
    for (const auto& [name, value] : variables) {
      std::cout << name << " = " << (value ? "True" : "False") << std::endl;
    }
  }

 private:
  bool checkCondition(const std::unordered_map<std::string, bool>& condition) const;

  bool applyAction(const std::unordered_map<std::string, bool>& action);
};