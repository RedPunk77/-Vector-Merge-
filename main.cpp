#include <iostream>
#include <algorithm>
#include <bitset>
#include <iomanip>
#include <vector>
#include <string>
#include <typeinfo>
#include <cmath>
#include <map>
#include <iterator>
#include <numeric>
#include <random>

using namespace std;
using vll = vector <long long>;
using chv = vector <char>;
using ull = uint64_t;
using ll = int64_t;
using ui = uint32_t;
using ush = uint16_t;
const ull INF = 1e18;
const double EPS = 1e-12;

vector <int> merge(vector <int> a, vector <int> b) {
    vector <int> c;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] >= b[j]) {
            c.push_back(b[j]);
            ++j;
        }
        else if (a[i] < b[j]) {
            c.push_back(a[i]);
            ++i;
        }
    }
    for (int i_new = i; i_new < a.size(); ++i_new) {
        c.push_back(a[i_new]);
    }
    for (int j_new = j; j_new < b.size(); ++j_new) {
        c.push_back(b[j_new]);
    }
    return c;
}

int main() {
	
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	
    int n1, n2;
    cin >> n1;
    vector <int> v1(n1);
    for (int i = 0; i < n1; ++i) cin >> v1[i];
    cin >> n2;
    vector <int> v2(n2);
    for (int i = 0; i < n2; ++i) cin >> v2[i];
    for (int i = 0; i < n1 + n2; ++i) cout << merge(v1, v2)[i]<<" ";
	return 0;
}
