#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Task 2";

    vector <int> vec = {2, 7 , 11, 15};
    int res;
    bool checkFind=false;
    cout << "Input result";
    cin >> res;

    for (int i=0; i<vec.size() ; i++)
    {
        for (int j=i+1; j<vec.size(); j++)
        {
            if (vec[i]+vec[j]==res)
            {
                cout << vec[i] << " " << vec[j] << endl;
                checkFind=true;
                break;
            }
        }
        if (checkFind) break;
    }
}
