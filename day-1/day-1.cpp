#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>
#include <map>

int main() {
    std::string s;
    std::vector<int> totals;
    int runningTotal = 0;
    auto result = 0;

    while (std::getline(std::cin, s)) {
        if (s != "") {
            runningTotal = runningTotal + stoi(s);
        } else {
            totals.push_back(runningTotal);
            runningTotal = 0;
        }
    }

    // Just returns the max
    // result = max(totals);

    // Return Top 3 max
    std::sort(totals.begin(), totals.end(), std::greater<int>());
    for (auto i = 0; i < 3; i++)
        result = std::reduce(totals.begin(), totals.begin()+3, 0);
    
    std::cout << result << std::endl;
    return 0;
}