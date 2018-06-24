#include<iostream>
#include <map>
#include <vector>
#include <math.h>
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
bool grep::rabin_karp(string& text,string& pattern)
{
int p=0;
int t=0;
for(int i=0;i<pattern.length();i++)
{
  p=(256*p+int(pattern[i]))%101;
  t=(256*t+int(text[i]))%101;
}
cout << p << endl;
cout << t << endl;
int h=1;
h=pow(256,pattern.length()-1);
if(p==t)
{
  return true;
}
else
{
  for(int i=0;i<text.length()-pattern.length();i++)
  {
    t = (256*(t - int(text[i])*h) + int(text[i+pattern.length()]))%101;
    cout << "new t " << t << endl;
    if(t<0)
    {
      t=t+101;
    }
    if(t==p)
    {
      for(int j=0;j<pattern.length();j++)
      {
        if(text[i+j+1]!=pattern[j])
        {
          cout << "false" << endl;
          break;
        }
      }
      cout << "pattern found" << endl;
      return true;
    }
  }
}
  return false;
}
