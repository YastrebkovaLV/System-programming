#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

void PrintWorryCount(const vector<bool> & is_nervous) {
    int worry_count = count(is_nervous.begin(), is_nervous.end(), true);
    cout << worry_count << endl;
}

int main() {
    PrintWorryCount({ true, true, false, true });
    return 0;
}
