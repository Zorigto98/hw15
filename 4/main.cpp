#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout << "Task 4" << endl;
    vector <int> vec = {-100,-50, -5, 1, 10, 15};

    for (int i=0; i<vec.size()/2; i++)
    {
        for (int j=0; j<vec.size()/2; j++)
        {
            if (abs(vec[j])>abs(vec[j+1]))
            {
                int temp=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
            }
        }
    }

    for (int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}
