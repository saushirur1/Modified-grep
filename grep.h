#include<iostream>
#include <map>
class grep
{
public:
  grep();
  void add_entry(std::string to_add);
  void print();
  bool rabin_karp(std::string& text,std::string& pattern);
private:
  std::map<std::string,int> hashmap;
};
