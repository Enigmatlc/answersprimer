#pragma once
#include<vector>
#include<string>
#include<sstream>
#include<set>
#include<map>
#include<fstream>
#include<memory>
#include<iostream>
#include"ConstStrBlobPtr.h"

class QueryResult;//forward declaration for query function.
class TextQuery {
public:
	//constructor
	TextQuery(std::ifstream& is) { read(is); }
	//functions
	std::ifstream& read(std::ifstream&);
	QueryResult query(const std::string&) const;

private:
	std::shared_ptr<StrBlob> lines;
	std::map<std::string, std::shared_ptr<std::set<StrBlob::size_type>>> occur;
};


//class to hold query searches
class QueryResult {
	friend std::ostream& print(std::ostream&, const QueryResult&);

public:
	QueryResult(const std::string str, std::shared_ptr<std::set<StrBlob::size_type>> num, std::shared_ptr<StrBlob> v) :q_word(str), q_numbers(num), q_line(v) {}
private:
	std::string q_word;
	std::shared_ptr<std::set<StrBlob::size_type>> q_numbers;
	std::shared_ptr<StrBlob> q_line;
};