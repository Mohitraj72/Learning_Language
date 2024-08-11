#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Create vector, declare
    // vector<int> v;
    // vector<int> v1(5, 1);

    // // Size and capacity

    // cout << "Size of V:" << v.size() << endl;
    // cout << "Capicty of V:" << v.capacity() << endl;
    // v.push_back(2);
    // v.push_back(4);
    // v.push_back(5);
    // cout << "Size of V:" << v.size() << endl;
    // cout << "Capicty of V:" << v.capacity() << endl;

    // // update Value
    // v[1] = 5;
    // cout << "Size of V:" << v1.size() << endl;
    // cout << "Capicty of V:" << v1.capacity() << endl;
    // v1.push_back(8);
    // cout << "Size of V:" << v1.size() << endl;
    // cout << "Capicty of V:" << v1.capacity() << endl;

    // // vector<int>v3= {1,2,3,4,5};

    // // Delete Value from vector
    // vector<int> vnew;
    // vnew.push_back(4);
    // vnew.push_back(41);
    // vnew.push_back(5);
    // vnew.push_back(6);
    // vnew.push_back(8);

    // vnew.pop_back();
    // cout << "Size of Vnew:" << vnew.size() << endl;
    // cout << "Capicty of Vnew:" << vnew.capacity() << endl;

    // vnew.erase(vnew.begin() + 1);
    // cout << "Size of Vnew:" << vnew.size() << endl;
    // cout << "Capicty of Vnew:" << vnew.capacity() << endl;

    // for (int i = 0; i < vnew.size(); i++)
    //     cout << vnew[i] << " ";
    // vnew.insert(vnew.begin() + 1, 50); // insert value
    // cout << endl;

    // vnew[1] = 37;
    // for (int i = 0; i < vnew.size(); i++)
    //     cout << vnew[i] << " ";
    // cout << endl;

    // vnew.clear(); // Remove all the element
    // cout << "Size of Vnew:" << vnew.size() << endl;
    // cout << "Capicty of Vnew:" << vnew.capacity() << endl;




    // vector<int> arr;

    // arr.push_back(2);
    // arr.push_back(12);
    // arr.push_back(21);
    // arr.push_back(122);
    // cout << arr[0] << endl;
    // cout << arr.front() << endl;

    // cout << arr[arr.size() - 1] << endl;
    // cout << arr.back() << endl;



    // vector<int> a; // Copy value of 1 to another

    // a = arr;
    // cout << a.size();
    // cout << endl;

    // for (auto it = arr.begin(); it != arr.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // cout << endl;
    // for (auto i : arr)
    //     cout << i << " ";

    vector<int> ans;
    
    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(125);


    // Sort in increasing Order 
    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<" ";
    cout<<endl;

    


    return 0;
}