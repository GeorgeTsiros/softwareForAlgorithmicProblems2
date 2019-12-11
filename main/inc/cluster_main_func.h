#ifndef __MAIN_FUNC_H__
#define __MAIN_FUNC_H__

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <chrono>
#include "Cluster.h"
#include "Initialization.h"
#include "Assignment.h"
#include "Update.h"
#include "Silhouette.h"
#include "HashTable.h"
#include "cube_HashTable.h"

void cluster_main_func(std::vector<std::vector<double>>&, std::vector<std::string>& id, std::string, int&, int&, int&, int&, int&, int&, int&, bool&);

#endif