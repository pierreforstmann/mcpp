// Employee.h
// 
#pragma once
#include <string>

class Employee 
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;

public:
	Employee(std::string first,
		 std::string alst,
		 int arbitrary);
	Employee();
	std::string GetName() const { return firstname + " " + lastname;};
	int GetNum() const { return arbitrarynumber;};
};
