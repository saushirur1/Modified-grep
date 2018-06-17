#include <iostream>
#include <map>
#include "grep.h"
using namespace std;
int main()
{
grep g;
g.add_entry("This is a letter.This is amazing.This is a letter.");
g.print();
string text="hello heabchs hahs";
string pattern="abc";
bool temp=g.rabin_karp(text,pattern);
cout << temp << endl;
return 0;
}
