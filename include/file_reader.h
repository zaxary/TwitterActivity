#pragma once

#include <map>
#include <set>
#include <fstream>
#include <string>
#include <iostream>
#include <vector>

using std::map;
using std::multimap;
using std::set;
using std::pair;
using std::string;
using std::vector;

class FileReader {
	public:
		
		map<unsigned long, unsigned int> GetMatrixData(const string& input_file, const string& output_file);

		multimap<int, int> GetPageRankData(const string& input_file, const string& output_file);

		void GenerateWeightedMatrix(const string& input_file, const string& output_file);

		vector<pair<int, double>> ReadTopUsers(const string& input_file, int num_users);

		map<unsigned long, unsigned int> ReadMatrixData(const string& input_file);
};

#include "../src/file_reader.cpp"