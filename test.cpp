#include <cassert>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

class Vector {
private:
  int *arr = nullptr;
  int size = 0;

public:
  Vector(int size) : size(size) {
    if (size < 0) {
      size = 1;
    }
    arr = new int[size]{};
  }

  int get(int idx) {
    assert(0 <= idx && idx < size);
    return arr[idx];
  }

  void set(int idx, int val) {
    assert(0 <= idx && idx < size);
    arr[idx] = val;
  }

  void print() {
    for (int i = 0; i < size; ++i) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  int find(int val) {
    for (int i = 0; i < size; ++i) {
      if (arr[i] == val)
        return i;
    }
    return -1;
  }

  int get_front() { return arr[0]; };

  int get_back() { return arr[size - 1]; };

  ~Vector() {
    delete[] arr;
    arr = nullptr;
  }
};

int main() {
  Vector v(10);
  for (int i = 0; i < 10; ++i) {
    v.set(i, i);
  }
  v.print();
  cout << v.find(5) << endl;
  cout << v.find(44);
  return 0;
}
