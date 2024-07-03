#include <cassert>
#include <iostream>
#include <iterator>
using namespace std;

class Vector {
private:
  int *arr = nullptr;
  int size = 0;
  int capacity = 0;

public:
  Vector(int size) : size(size) {
    if (size < 0)
      size = 1;
    capacity = size * 2;
    arr = new int[capacity]{};
  }

  ~Vector() {
    delete[] arr;
    arr = nullptr;
  }

  int get_size() { return size; }

  int get(int idx) {
    assert(0 <= idx && idx < size);
    return arr[idx];
  }

  void set(int idx, int val) {
    assert(0 <= idx && idx < size);
    arr[idx] = val;
  }

  void insert(int idx, int val) {
    assert(0 <= idx && idx < size);

    if (size == capacity)
      expand_capacity();

    for (int i = size + 1; i > idx; i--) {
      arr[i] = arr[i - 1];
    }

    size++;
    arr[idx] = val;
  }

  void expand_capacity() {
    capacity *= 2;
    int *arr2 = new int[capacity]{};

    for (int i = 0; i < size; ++i)
      arr2[i] = arr[i]; // copy data
    swap(arr, arr2);
    delete[] arr2;
  }

  void push_back(int value) {
    if (size == capacity) {
      expand_capacity();
    }
    arr[size++] = value;
  }

  void print() {
    for (int i = 0; i < size; ++i)
      cout << arr[i] << " ";
    cout << "\n";
  }

  int find(int value) {
    for (int i = 0; i < size; ++i)
      if (arr[i] == value)
        return i;
    return -1; // -1 for NOT found
  }
};

int main() {

  Vector v(1);
  for (int i = 0; i < 1; ++i)
    v.set(i, 2);

  v.print();
  v.insert(0, 34);
  v.print();

  return 0;
}
