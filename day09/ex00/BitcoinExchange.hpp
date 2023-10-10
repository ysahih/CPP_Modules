#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <map>
#include <iomanip>
#include <sstream>


bool isDigit(std::string str);
double getValue(std::string value, bool flag);
void parseHead(std::string line);
std::string getDate(std::string date);
void parseLine(std::map<std::string, double>& map, std::string line, bool flag);
void btcExchange(std::map<std::string, double> data, std::ifstream& input);
std::map<std::string, double> getDatabase();

#endif