#include <bits/stdc++.h>

#define max(x, y) (x) > (y) ? (x) : (y)

using namespace std;

typedef vector<int> vi;

vi numbers;

int kadane() {
    int max_here, max_so_far;
    max_here = max_so_far = 0;
    for (int i=0 ; i<numbers.size() ; i++) {
        max_here = max(0, max_here + numbers[i]);
        max_so_far = max(max_so_far, max_here);
    }
    return max_so_far;
}

int main() {
    string line;
    while (getline(cin, line)) {
        istringstream is(line);
        numbers.clear();
        int temp;
        while (is >> temp) {
            numbers.push_back(temp);
        }
        printf("%d\n", kadane());
    }
}
