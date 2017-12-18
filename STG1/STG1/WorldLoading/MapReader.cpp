#include "MapReader.h"



MapReader::MapReader(const string& map_path, vector<vector<string>>* map_attributes)
{
	fstream map_file(map_path.c_str(), fstream::in);
	if (!map_file) printf("Map read err\n");
	string line;
	while(getline(map_file, line)){
		std::cout << line << endl;
		if(line.at(0) != '#' && line != "" && line != " "){
			istringstream iss(line);
			//copy(istream_iterator<string>(iss),
			//	istream_iterator<string>(), ostream_iterator<string>(cout, "\n"));
			map_attributes->push_back({ istream_iterator<string>{iss}, istream_iterator <string>{} });
		}
	}
}


MapReader::~MapReader()
{
}
