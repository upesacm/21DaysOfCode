#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class HeapBuilder {
 private:
  vector<int> data;
  vector< pair<int, int> > swaps;

  void WriteResponse() const {
    cout << swaps.size() << "\n";
    for (int i = 0; i < swaps.size(); ++i) {
      cout << swaps[i].first << " " << swaps[i].second << "\n";
    }
  }

  void ReadData() {
    int n;
    cin >> n;
    data.resize(n);
    for(int i = 0; i < n; ++i)
      cin >> data[i];
  }

  void GenerateSwaps() {
    swaps.clear();
    /*
	 This is a naive implementation which just sorts 
     the given sequence using selection sort algorithm
     and saves the resulting sequence of swaps.
     This turns the given array into a heap, 
     but in the worst case gives a quadratic number of swaps.
    */
    for (int i = 0; i < data.size(); ++i)
      for (int j = i + 1; j < data.size(); ++j) {
        if (data[i] > data[j]) {
          swap(data[i], data[j]);
          swaps.push_back(make_pair(i, j));
        }
      }
  }

 public:
  void Solve() {
    ReadData();
    GenerateSwaps();
    WriteResponse();
  }
};

int main() {
	
  HeapBuilder heap_builder;
  heap_builder.Solve();
  return 0;
}
