#include <iostream>
#include <fstream>
#include <exception>
#include <vector>

using std::vector;

vector<int> sum(vector<int>& a1, vector<int>& a2) {
  if (size(a1) != size(a2)) {
    throw std::exception();
  }

  int n = size(a1);
  vector<int> result(n,0);
  for (int i=0; i!=n; ++i) {
    result[i] = a1[i] + a2[i];
  }

  return result;
}

int main() {
  vector<int> a1 = { {0,3,4,1} };
  vector<int> a2 = { {5,2,1,5} };

  vector<int> output = sum(a1, a2);
  for (auto el: output) {
    std::cout << el << " ";
  }
  std::cout << '\n';

  std::ofstream myfile;
  myfile.open("summation.txt");
  for (auto el: output) {
    myfile << el << " ";
  }
  

  return 0;
}
