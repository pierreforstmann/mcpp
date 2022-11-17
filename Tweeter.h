#pragma once
#include "Person.h"
#include "Resource.h"
#include <string>

class Tweeter:
    public Person
{
private:
  std::string twitterhandle;
public:
  Tweeter(std::string first,
        std::string last,
	int arbitrary,
	std::string handle);
  ~Tweeter();
};
