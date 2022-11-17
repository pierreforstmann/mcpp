#include <string>
#include "Resource.h"

class Person
{
private:
   std::string firstname;
   std::string lastname;
   int arbitrarynumber;
   Resource* pResource;

public:
   Person(std::string first, std::string last, int arbitrary);
   Person();
   ~Person();
   // for "rule of 3"
   Person(Person const & p);
   Person& operator=(const Person &p);

   std::string GetName() const;
   int GetNumber () const {return arbitrarynumber;}
   void SetNumber(int number) {arbitrarynumber =  number; }
   bool operator<(Person const& p) const;
   bool operator<(int i) const;
   void SetFirstName(std::string first) {firstname = first;}
   void AddResource();

};

bool operator<(int i, Person const& p);
