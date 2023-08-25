#include <iostream>
#include <algorithm>
using namespace std;

struct queue
{
    int len{0};
    int arr[100]{0};

    void add_end(int n)
    {
        arr[++len - 1] = n;
    }

    void add_front(int n)
    {
        for (int i = ++len; i > 0; --i)
            arr[i] = arr[i - 1];

        arr[0] = n;
    }

    void print()
    {
        for (int i = 0; i < len; i++)
            cout << arr[i] << " ";
    }

    int remove_front()
    {
        int removed = arr[0];
        for (int i = 1; i < len; i++)
            arr[i - 1] = arr[i];
        return removed;
    }
};

int main()
{
    queue my_queue;
    my_queue.add_end(10);
    my_queue.add_end(20);
    my_queue.add_end(30);
    my_queue.print();
    cout << endl;
    my_queue.add_front(1);
    my_queue.add_front(4);
    my_queue.print();
    cout << endl;
    cout << my_queue.remove_front();
    return 0;
}