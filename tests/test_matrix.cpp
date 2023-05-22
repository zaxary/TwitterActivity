#include "../cs225/catch/catch.hpp"

#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <string>

#include "../include/file_reader.h"


const std::string kInput = "tests/sample_data.txt";
const std::string kOutput = "tests/temp_output.txt"; // placeholder file, not used

TEST_CASE("Matrix Data", "[matrix]") {
  FileReader fr;
  map<unsigned long, unsigned int> matrix = fr.GetMatrixData(kInput, kOutput);

  REQUIRE(matrix.size() == 6);

  std::map<unsigned long, unsigned int> actual;
  actual.insert(std::make_pair(500000, 1));
	actual.insert(std::make_pair(1000000, 1));
	actual.insert(std::make_pair(1000001, 3));
  actual.insert(std::make_pair(1500002, 1));
	actual.insert(std::make_pair(2000001, 3));
	actual.insert(std::make_pair(2000003, 5));

  REQUIRE(matrix == actual);
}

TEST_CASE("Adjacency Matrix", "[matrix]") {
  FileReader fr;
  std::multimap<int, int> adjacency_matrix = fr.GetPageRankData(kInput, kOutput);
  
	REQUIRE(adjacency_matrix.size() == 6);

	std::multimap<int, int> actual;
	actual.insert(std::make_pair(1, 0));
	actual.insert(std::make_pair(2, 0));
	actual.insert(std::make_pair(2, 1));
  actual.insert(std::make_pair(3, 2));
	actual.insert(std::make_pair(4, 1));
	actual.insert(std::make_pair(4, 3));

	REQUIRE(adjacency_matrix == actual);
}

TEST_CASE("Weighted Matrix", "[matrix]") {

}