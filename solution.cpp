#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
using namespace sol890;
using namespace std;

/*takeaways
  - word = xxyyxxx pattern = aabbaaa
  - x's final position is 6
    and its position is changing from 0->1->4->5->6
  - we should expect a in pattern has the same
    behavior 0->1->4->5->6
  - y and b should have the same behavior in how
    the their position changes as well
*/

bool Solution::match(string &word, string &pattern)
{
  /*assume we only have lower case letters */
  auto wpos = vector<int>(26, -1);
  auto ppos = vector<int>(26, -1);
  for (auto pos = 0; pos < word.size(); pos++)
  {
    auto w = word[pos] - 'a', p = pattern[pos] - 'a';
    /* how the position changes should be the same
       for word[pos] and pattern[pos]
    */
    if (wpos[w] != ppos[p])
      return false;
    /* record new position */
    wpos[w] = ppos[p] = pos;
  }
  return true;
}

vector<string> Solution::findReplace(vector<string> &words, string pattern)
{
  auto result = vector<string>();
  for (auto w : words)
    if (match(w, pattern))
      result.push_back(w);

  return result;
}
