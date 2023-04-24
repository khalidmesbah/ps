#include <iostream>
using namespace std;

int main()
{
    int q{2};
    cout << "to convert 3d to 1d type 1\n"
            "to convert 1d to 3d type 2\n";
    cin >> q;
    if (q == 1)
    {
        cout << "Enter the rows , cols , depth of the 3d array: ";
        int rows, cols, depth;
        cin >> rows >> cols >> depth;
        int flattened_array[rows * cols * depth];

        for (int row = 0; row < rows; row++)
            for (int col = 0; col < cols; col++)
                for (int dep = 0; dep < depth; dep++)
                    cin >> flattened_array[row * cols * depth + col * depth + dep];
        cout << "the flattened arrays is:-\n";
        for (int i = 0; i < rows * cols * depth; i++)
            cout << flattened_array[i] << " ";
    }
    else if (q == 2)
    {
        cout << "Enter the length of the 1d array: ";
        int len{18};
        cin >> len;

        cout << "Enter the rows , cols , depth of the 3d array: ";
        int rows{3}, cols{3}, depth{2};
        cin >> rows >> cols >> depth;

        cout << "Enter the 1d array";
        int three_dim_array[rows][cols][depth];
        for (int i = 0; i < len; i++)
            cin >> three_dim_array[(i % (rows * cols)) / cols][(i % (rows * cols)) % cols][i / (rows * cols)];

        cout << "the 3d arrays is:-\n";
        for (int row = 0; row < rows; row++)
        {
            for (int col = 0; col < cols; col++)
            {
                int dep = 0;

                cout << three_dim_array[row][col][dep] << " " << three_dim_array[row][col][++dep] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
/*
3 3 2
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
 */