#include<iostream>
#include <unordered_map>

using namespace std;
class OrderMap
{
public:
void display(unordered_map<int,string> um)
{
    // for(auto it:um)
    // {
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }
    // um.erase(1);
    for(auto it=um.begin();it!=um.end();it++)
    {
        cout<<it->first<<"->"<<it->second<<endl;
    }
    return;
}

};
int main ()
{
    OrderMap inst;
    unordered_map<int, string> um ={{1, "Geeks"}, {2, "For"}, {3, "C++"},{4, "C++"}};
    
    inst.display(um);
    cout<<"------------------------------"<<endl;
    inst.display(um);

    return 0;
}