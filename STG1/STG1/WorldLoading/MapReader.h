#pragma once
#include <string>
#include <vector>
using namespace std;
class MapReader
{
public:
	MapReader(const string& map_path, const vector<vector<string>>& map_attributes);
	~MapReader();
};

