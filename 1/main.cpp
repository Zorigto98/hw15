#include <iostream>
#include <vector>

using namespace std;
int main() {
    cout << "Task 1" << endl;

    vector <int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int max_val=0;
    int a=0, b=0;

    for (int i=0; i<vec.size(); i++)
    {
        for (int j=1; j<vec.size(); j++)
        {
            if (vec[i]>0 && vec[j]>0)
            {
                int max_val_temp=0;
                for (int k=i; k<=j; k++)
                {
                    max_val_temp+=vec[k];
                }
                if (max_val_temp>max_val)
                {
                    max_val=max_val_temp;
                    a=i;
                    b=j;
                }
            }
        }
    }

    cout << a << " " << b << endl;
}
