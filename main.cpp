#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

string s;
string lst;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  getline(cin, s);
  getline(cin, lst);

  for (const auto& x : lst) {
    if ('A' <= x && x <= 'Z') {
      for (auto&& y : s) {
        if (x == y) {
          y = x + ('a' - 'A');
        }
      }
    }
  }
  cout << s;

  return 0;
}