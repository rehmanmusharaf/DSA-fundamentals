#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
  
    // Creating an unordered_set of integers
    unordered_set<int> us = {1, 2, 3, 4, 5};
    // ordered_set<int> us2 = {1, 2, 3, 4, 5};

    for (auto x : us) 
        cout << x << " ";
        int key=11;
        if(us.find(key)!=us.end())
        {
            cout<<"key found";
        }
        else
        {
            cout<<"key not found !";
        }
    return 0;
}

