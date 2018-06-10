#include <iostream>
#include <map>
#include "grep.h"
using namespace std;
int main()
{
grep g;
g.add_entry("This is a letter.This is amazing.This is a letter.");
g.print();
return 0;
}
