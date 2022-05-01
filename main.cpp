#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol890;

/*
Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
Output: ["mee","aqq"]
Explanation: "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}.
"ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation,
since a and b map to the same letter.
*/
tuple<vector<string>, string, vector<string>>
testFixture1()
{
  auto words = vector<string>{"abc", "deq", "mee", "aqq", "dkd", "ccc"};
  auto output = vector<string>{"mee", "aqq"};
  return make_tuple(words, "abb", output);
}

/*

*/

tuple<vector<string>, string, vector<string>>
testFixture2()
{
  auto words = vector<string>{"a", "b", "c"};
  auto output = vector<string>{"a", "b", "c"};
  return make_tuple(words, "a", output);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see " << Util::toString(get<2>(f)) << ": " << Util::toString(sol.findReplace(get<0>(f), get<1>(f))) << endl;
}
void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see " << Util::toString(get<2>(f)) << ": " << Util::toString(sol.findReplace(get<0>(f), get<1>(f))) << endl;
}

main()
{
  test1();
  test2();

  return 0;
}