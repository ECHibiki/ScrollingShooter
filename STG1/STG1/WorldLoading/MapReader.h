#pragma once
#include <string>
#include <vector>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <fstream>
#include<iterator>
using namespace std;
class MapReader
{
public:
	MapReader(const string& map_path, vector<vector<string>>* map_attributes);
	~MapReader();
};

