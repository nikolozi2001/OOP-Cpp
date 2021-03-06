#include <iostream>
#include <string>
#include <vector>
#include <map>
 
using namespace std;

void PrintVector(const vector<bool>& s){
    int i = 0;
    for (const auto& e : s)
    {
        cout<<i<<" --> "<<e<<endl;
        ++i;
    }
    
}

void PrintMap(const map<string, int>& m){
    
    for (const auto& e : m)
    {
        cout<<e.first<<" --> "<<e.second<<endl;
    }
    
}

int main(){
    map<string, int> fam_people_bd{{"Charles Babbage",1791}, {"Ada Lavelace",1815}, {"Alan Turning",1912}, {"John Von Neuman",1903}};
    map<int, vector<string>> s = {{1791,{{"Charles Babbage","Father of Computers"}}}};
    cout<<"1"<<endl;
    PrintMap(fam_people_bd);
    fam_people_bd["Charles Babbage"]=1791;
    fam_people_bd["Ada Lavelace"]=1815;
    fam_people_bd["Alan Turnig"]=1912;
    fam_people_bd["John Von Neuman"]=1903;
    cout<<"2"<<endl;
    PrintMap(fam_people_bd);
    return 0;
}