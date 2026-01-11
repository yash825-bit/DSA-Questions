#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> mp;

    mp["apple"] = 2;
    mp["banana"] = 3;
    mp["kiwi"] = 2;


    // if(mp.find("mango") != mp.end()){
    //     cout<<"mango exists"<<endl;
    // }else{
    //     cout<<"mango does'nt exists"<<endl;
    // }

    mp.erase("banana");
    mp.insert({"banana", 7});
    mp.insert(make_pair("litchi", 8));
    mp.emplace("guava", 90);

    // for(auto it = mp.begin(); it!=mp.end(); it++){
    //     cout<<it->first<<" : "<<it->second<<endl;
    // }
    mp.erase(mp.begin(), mp.end());
    cout<<mp.size()<<endl;
    cout<<mp.empty()<<endl;ṇ
}