#include <string>
#include <iostream>
using namespace std;
string binarySearch(int arr[] , int size , int value);
int main()
{
    int arr[10];
    int value;
    while(true){
        cout<<"the 10 elements of the arrays are ...\n";
        for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
        {
            cin>>arr[i];
        }
        cout<<"i am searching for ...\n";
        cin>>value;
        cout<<binarySearch(arr,10,value);
    }

    return 0;
}

string binarySearch(int arr[] , int size , int value){
    int start = 0;
    int end = size -1 ;
    int mid;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if(arr[mid] == value) return "the element is found\n";
        else if (value > arr[mid]) start = mid + 1;
        else end = mid - 1;
    }

    return "the element is NOT found !\n";

}
