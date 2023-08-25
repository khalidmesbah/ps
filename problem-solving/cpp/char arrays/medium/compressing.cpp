#include <iostream>
using namespace std;

int main()
{

    string str;
    cin >> str;

    int cnt{0};
    for (int i = 0; i < str.size(); i++)
    {
        cnt = 0;
        for (int j = 0; j < str.size(); j++)
            if (str[i] == str[j] && str[i] != str[i - 1])
                cnt++;
        if (cnt && str[i] == str[str.size() - 1])
            cout << str[i] << cnt;

        else if (cnt)
            cout << str[i] << cnt << "_";
    }

    // another advanced solution
    /* 
    #include <iostream>
using namespace std;

int main()
{

    string str{"ccccDDDxxxxxxxxe"};
    cin >> str;

    str += "$";

    int groupSize{1};
    bool is_first_group{true};

    for (int i = 1; i < (int)str.size(); i++)
    {
        if (str[i] != str[i - 1])
        {
            if (!is_first_group)
                cout << "_";

            cout << str[i - 1] << groupSize;
            groupSize = 0;
            is_first_group = 0;
        }
        ++groupSize;
    }

    return 0;
}
 */

    return 0;
}