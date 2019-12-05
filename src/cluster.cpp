#include "../inc/cluster.h"

Cluster::Cluster(){};
Cluster::~Cluster(){};

void Cluster::InsertPoint(Point point)
{
  this->Array.push_back(point);
}

int Cluster::getClusterSize()
{
  return this->Array.size();
}

std::vector<Info> Cluster::getArray()
{
  return this->Array;
}

void Cluster::clear()
{
  this->Array.clear();
}

MapNode::MapNode(){};
MapNode::~MapNode(){};

void MapNode::setInfo(int cluster, int second, double distance, double radius)
{
  this->clusterPosition= cluster;
  this->second = second;
  this->dist = distance;
  this->R = radius;
}
void MapNode::getInfo(int& cluster, int& second, double& distance, double& radius)
{

  cluster = this->clusterPosition;
  second = this->second;
  distance = this->dist; 
  radius = this->R; 
}
