#include "BitcoinExchange.hpp"


void parseHead(std::string line)
{
	int i = 0;
	std::string s;
	std::string str[2];
	std::istringstream iss(line);

	while(std::getline(iss, s, '|')){
		s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
		str[i++] = s;
	}
	if (i != 2 || str[0] != "date" || str[1] != "value")
		throw "Error: invalid head!";
}


std::string getDate(std::string date)
{

	int i = 0;
	std::string s;
	std::string str[3];
	std::istringstream iss(date);

	while(std::getline(iss, s, '-')){
		s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
		str[i++] = s;
	}
	if(i != 3 || str[0].size() != 4 || str[1].size() != 2 || str[2].size() != 2)
		throw "Error: invalid date";
	if (atoi(str[1].c_str()) > 12 || atoi(str[1].c_str()) < 1 || atoi(str[2].c_str()) > 31 || atoi(str[2].c_str()) < 1)
		throw "Error: invalid date";
	return str[0] + str[1] + str[2];
}

bool isDigit(std::string str) {
    for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
        if (!isdigit(*it)) 
            return false;
    }
    return true;
}

double getValue(std::string value, bool flag)
{
	double val = atof(value.c_str());
	if (!flag && !isDigit(value))
		throw "Error: enter a valid value.";

	if (flag)
		return val;
	if (val < 0 || val > 1000)
		throw "Error: value is out of range.";
	return val;
}

void parseLine(std::map<std::string, double>& map, std::string line, bool flag)
{
	int i = 0;
	std::string s;
	std::string str[2];
	std::istringstream iss(line);
	char dlm = flag ? ',' : '|';

	
	while(std::getline(iss, s, dlm)){
		s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
		str[i++] = s;
	}
	if (i != 2)
		throw "Error: bad input.";
	else {
		map[getDate(str[0])] = getValue(str[1], flag);
	}
}

void btcExchange(std::map<std::string, double> data, std::ifstream& input)
{
	std::string line;
	std::map<std::string, double> map;
    // std::cout.precision(8);
	std::getline(input, line);
	try{
		parseHead(line);
	} catch (const char*s){std::cout << s << std::endl; return;}
	while (std::getline(input, line)){
		if (line.empty())
			continue;
		try {
			parseLine(map, line, false);
			std::map<std::string, double>::reverse_iterator it = map.rbegin();
			std::cout << line.erase(line.find('|')) << " => " << it->second << " = ";
			std::map<std::string, double>::iterator it2 = data.find(it->first);
			if (it2 == data.end()){
				it2 = data.lower_bound(it->first);
				if (it2 != data.begin())
					it2--;
			}
			std::cout << std::setprecision(8) << it->second * it2->second << std::endl;
		} catch(const char* s){
			std::cout << s << std::endl;
		}
	}
	
}
std::map<std::string, double> getDatabase()
{
	std::string line;
	std::string date;
	std::map<std::string, double> data;

	std::ifstream dataBase("data.csv");
	if (!dataBase.is_open()){
		throw "Error: cannot open file.";
	}
	getline(dataBase, line);
	while(getline(dataBase, line)){
		if (line.empty())
			continue;
		try{
			parseLine(data, line, true);
		} catch (const char* s){
			std::cout << s << std::endl;
			throw "Abort: database got hacked!";
		}
	}
	return data;
}
