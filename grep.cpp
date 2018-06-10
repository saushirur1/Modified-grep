#include<iostream>
#include <map>
#include <vector>
#include "grep.h"
using namespace std;
grep::grep()
{
}
void grep::add_entry(string to_add)
{
string temp="";
for(int i=0;i<to_add.length();i++)
{
  temp=temp+to_add[i];
  if(to_add[i]==' ' || to_add[i]=='.' || i==(to_add.length()-1))
  {
    if(hashmap.find(temp)!=hashmap.end())
    {
      hashmap[temp]=hashmap[temp]+1;
    }
    else
    {
      hashmap[temp]=1;
    }
    temp="";
  }
  else
  {
    temp=temp;
  }
}
}
void grep::print()
{
map<string,int>:: iterator it;
for(it=hashmap.begin();it!=hashmap.end();++it)
{
  cout << "first: " << it->first << " second: " << it->second << endl;
}
}
