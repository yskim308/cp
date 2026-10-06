#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
#define rep(i, n) for (ll i = 0; i < n; ++i)

const ll INF = 2e18;
template <typename T> void print_vec(vector<T> &v) {
  for (T i : v) {
    cout << "[" << i << "]";
  }
  cout << endl;
}

template <typename K, typename V> void print_map(map<K, V> &mp) {
  for (auto [key, value] : mp) {
    cout << "key: " << key << ", value: " << value << "\n";
  }
}

template <typename T> vector<T> fillVec(size_t n) {
  vector<T> v(n);
  for (size_t i = 0; i < n; ++i) {
    cin >> v[i];
  }
  return v;
}

const ll MOD = 1e9 + 7;

int main() {}
