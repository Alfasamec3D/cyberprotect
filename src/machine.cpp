#include"machine.hpp"
void InferenceMachine::run() {
    bool changed;
    do {
      changed = false;
      for (const auto& rule : rules) {
        if (checkCondition(rule.condition)) {
          if (applyAction(rule.action)) {
            changed = true;
            break;  // применили одно правило — начать с начала
          }
        }
      }
    } while (changed);
  }
  bool InferenceMachine::checkCondition(
    const std::unordered_map<std::string, bool>& condition) const {
  for (const auto& [var, val] : condition) {
    auto it = variables.find(var);
    if (it == variables.end() || it->second != val) return false;
  }
  return true;
}
bool InferenceMachine::applyAction(const std::unordered_map<std::string, bool>& action) {
    bool changed = false;
    for (const auto& [var, val] : action) {
      if (variables[var] != val) {
        variables[var] = val;
        changed = true;
      }
    }
    return changed;
  }