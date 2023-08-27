#include <algorithm>
#include <cassert>
#include <iostream>

using namespace std;

class Vector {
private:
  int *arr{nullptr};
  int size{0};    // user size
  int capacity{}; // actual size

public:
  Vector(int size) : size(size) {
    if (size < 0) // shouldn't it be <=
      size = 1;
    capacity = 2 * size;
    arr = new int[capacity]{};
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
    for (int i = 0; i < size; ++i)
      cout << arr[i] << " ";
    cout << "\n";
  }

  int find(int val) {
    for (int i = 0; i < size; ++i)
      if (arr[i] == val)
        return i;

    return -1;
  }

  void push_front(int val) {}

  void insert(int idx, int val) {
    if (size == capacity)
      expand_capacity();

    for (int i = size - 1; i >= idx; --i) {
      arr[i + 1] = arr[i];
    }

    arr[idx] = val;
  }

  void expand_capacity() {

    capacity *= 2;

    int *arr2 = new int[capacity]{};

    for (int i = 0; i < size; ++i) {
      arr2[i] = arr[i];
    }

    swap(arr, arr2);
    delete[] arr2;
  }

  void push_back(int val) {
    if (size == capacity)
      expand_capacity();
    arr[size++] = val;
  }

  int get_front() { return arr[0]; }

  int get_back() { return arr[size - 1]; }

  ~Vector() {
    delete[] arr;
    arr = nullptr;
  }
};

int main() {
  int n = 6;
  Vector v(n);
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(3);
  v.push_back(3);
  v.push_back(3);
  v.insert(9, 5);
  v.print();
  return 0;
}
