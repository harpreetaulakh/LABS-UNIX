#include "pidUtil.h"
#include <iostream>

int main() {
  std::cout << "pids: ";
  int * pids = GetAllPids();
  for (int i = 0; i < 3; i++) {
    std::cout << pids[i] << " ";
  }
  std::cout << "\n names: ";
  char * * names = GetNameByPid(pids, 3);
  for (int i = 0; i < 3; i++) {
    std::cout << names[i] << " ";
  }
  std::cout << "\nname of pid 1: " << GetNameByPid(1) << "\n";
  std::cout << "name of pid 22: ";
  if (GetNameByPid(22) == NULL) {
    std::cout << GetErrorMsg(GetError()) << "\n";
  }
  std::cout << "pid of Lab2: " << GetPidByName("Lab2") << "\n";
  std::cout << "pid of Lab22: ";
  if (GetPidByName("Lab22") == -1) {
    std::cout << GetErrorMsg(GetError()) << "\n";
  }
}