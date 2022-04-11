#include <iostream>
#include <vector>
#include "head.hpp"

using namespace std;

void insert_vector(vector <int> & v);

int main() {
  int n;
  cin >> n;
  vector <int> v(n);
  insert_vector(v);
}

void insert_vector(vector <int> & v){
  for (int i = v.size() - 1; i >= 0; i--)
      cin >> v[i];
}
