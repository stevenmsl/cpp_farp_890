
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_set>
#include <string>
#include <stack>

using namespace std;
namespace sol890
{

  class Solution
  {
  private:
    bool match(string &word, string &pattern);

  public:
    vector<string> findReplace(vector<string> &words, string pattern);
  };
}
#endif