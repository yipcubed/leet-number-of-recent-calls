#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
#include <list>

// https://leetcode.com/problems/number-of-recent-calls/

// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class RecentCounter {
public:
    list<int> pt;
    RecentCounter() {

    }

    // number of pings 3000ms to now
    // Any ping with time in [t - 3000, t] will count, including the current ping.
    int ping(int t) {
        pt.push_back(t);
        while (pt.back() - pt.front() > 3000) {
            pt.pop_front();
        }
        return pt.size();
    }
};

void test1() {
    RecentCounter* obj = new RecentCounter();
    cout << "1 ? " << obj->ping(1) << endl;
    cout << "2 ? " << obj->ping(100) << endl;
    cout << "3 ? " << obj->ping(3001) << endl;
    cout << "3 ? " << obj->ping(3002) << endl;

}

void test2() {

}

void test3() {

}