#include<iostream>
#include <map>
class grep
{
public:
  grep();
  void add_entry(std::string to_add);
  void print();
private:
  std::map<std::string,int> hashmap;
};
