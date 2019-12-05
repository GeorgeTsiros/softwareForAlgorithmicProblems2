#ifndef __CLUSTERH__
#define __CLUSTERH__
#include "point.h"
#include <iostream>
#include <vector>
#include <list>

class Cluster
{
    std::vector<Point> Array; 

public:
    Cluster();
    ~Cluster();
    int getClusterId();
    void InsertPoint(Point);
    int getClusterSize();
    std::vector<Point> getArray();
    void setClusterPoint(std::vector<double>);
    void clear();
};

class MapNode
{
    int clusterPosition;
    int second;
    double dist;
    double R;
    
public:
    MapNode(){};
    ~MapNode(){};
    void setInfo(int, int, double, double);
    void getInfo(int&, int&, double&, double&);
};

#endif



