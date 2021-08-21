#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout << "Task 4" << endl;
    vector <int> vec = {-100,-50, -5, 1, 10, 15};

    for (int i=0; i<vec.size(); i++)
    {
        for (int j=0; j<vec.size()-1; j++)
        {
            if (vec[j]>0)
            {
                if (abs(vec[j])>abs(vec[j-1]))
                {
                    int temp=vec[j];
                    vec[j]=vec[j-1];
                    vec[j-1]=temp;
                }
                if (abs(vec[j])<abs(vec[j+1]))
                {
                    int temp=vec[j];
                    vec[j]=vec[j+1];
                    vec[j+1]=temp;
                }
            }
        }
    }

    for (int i=vec.size()-1; i>=0; i--)
    {
        cout << vec[i] << " ";
    }
}
