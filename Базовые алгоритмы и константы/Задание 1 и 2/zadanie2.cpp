#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

bool startsWithA(const string& str) {
    return !str.empty() && (str[0] == 'a' || str[0] == 'A');
}

int CountStartsWithA(const vector<string>& xs) {
    return count_if(xs.begin(), xs.end(), startsWithA);
}

int main() {
    cout << CountStartsWithA({ "And"s, "another"s, "one"s, "gone"s, "another"s, "one"s, "bites"s, "the"s, "dust"s });
    return 0;
}
