#ifndef GLOBALS_HPP
#define GLOBALS_HPP

#include <cstdlib>
#include <string>
#include <vector>

#include "Node.hpp"

extern double computingTime;
extern double latency;
extern double corruptionChance;

extern size_t numNodes;
extern size_t gossipFactor;

extern std::vector<std::pair<long long, std::pair<double, double>>> cities;
extern std::vector<Node> nodes;

extern std::string citiesFilePath;
extern std::string logsRootFolderPath;

#endif // GLOBALS_HPP
