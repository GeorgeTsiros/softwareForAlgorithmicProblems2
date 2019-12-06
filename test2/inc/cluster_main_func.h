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
#include "../../inc/Cluster.h"
#include "../../inc/Initialization.h"
#include "../../inc/Assignment.h"
#include "../../inc/Update.h"
#include "../../inc/Silhouette.h"
#include "../../inc/HashTable.h"
#include "../../inc/cube_HashTable.h"

void cluster_main_func(std::vector<std::vector<double>>&, std::vector<std::string>& id, std::string, int&, int&, int&, int&, int&, int&, int&, bool&);

#endif