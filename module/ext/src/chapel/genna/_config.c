#include "error.h"

const int mainHasArgs = 0;
void CreateConfigVarTable(void) {
  initConfigVarTable();
  installConfigVar("printModuleInitOrder", "bool", "Built-in");
  installConfigVar("dataParTasksPerLocale", "int(64)", "Built-in");
  installConfigVar("dataParIgnoreRunningTasks", "bool", "Built-in");
  installConfigVar("dataParMinGranularity", "int(64)", "Built-in");
  installConfigVar("memTrack", "bool", "Built-in");
  installConfigVar("memStats", "bool", "Built-in");
  installConfigVar("memLeaks", "bool", "Built-in");
  installConfigVar("memLeaksTable", "bool", "Built-in");
  installConfigVar("memMax", "uint(64)", "Built-in");
  installConfigVar("memThreshold", "uint(64)", "Built-in");
  installConfigVar("memLog", "c_string", "Built-in");
  installConfigVar("memLeaksLog", "c_string", "Built-in");
  installConfigVar("numLocales", "int(64)", "Built-in");
}


