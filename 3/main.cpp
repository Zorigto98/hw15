#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Task 3" << endl;

    vector <int> vec;

    bool checkInput=false;
    bool checkEndProg=false;
    while (!checkEndProg)
    {
        cout << "Input elements" << endl;
        cout << "Input -1 to display the 5th element" << endl;
        cout << "Input -2 for end the program" << endl;
        do
        {
            int val;
            cin >> val;
            vec.push_back(val);
            if (val==-1 && vec.size()<6)
            {
                cout << "You entered less than 5 values. Try again!" << endl;
                vec.clear();
            }
            else if ((val==-1 && vec.size()>=6) || val==-2) checkInput=true;
        }
        while (!checkInput);

        if (vec[vec.size()-1]==-1)
        {
            cout << "end" << endl;
            vec.pop_back();

            for (int i=0; i<vec.size(); i++)
            {
                for (int j=0; j<vec.size()-1; j++)
                {
                    if (vec[j]>vec[j+1])
                    {
                        int temp=vec[j];
                        vec[j]=vec[j+1];
                        vec[j+1]=temp;
                    }
                }
            }

            cout << "5th element " << vec[4] << endl << endl;
        }

        if (vec[vec.size()-1]==-2) checkEndProg=true;
    }
    cout << "End of the program";
}
