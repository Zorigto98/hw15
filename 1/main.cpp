#include <iostream>
#include <vector>

using namespace std;
int main() {
    cout << "Task 1" << endl;

    vector <int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int max_val=0;
    int a=vec.size(), b=0;
    int temp=0;

    for (int i=0; i<vec.size(); i++)
    {
        temp+=vec[i];
        if (temp > max_val)
        {
            max_val = temp;
            if (i<a) a=i;
            if (i>b) b=i;
        }

        if (temp < 0)
        {
            temp = 0;
            a=vec.size();
            b=0;
        }
    }

    cout << a << " " << b << endl;
}
