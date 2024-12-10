*/Write a program in C++ to use map associative container. The keys will be the names of
states and the values will be the populations of the states. When the program runs, the user
is prompted to type the name of a state. The program then looks in the map, using the state
name as an index and returns the population of the state./*
#include<iostream>
#include<map>
#include<string>
#include<utility>
using namespace std;
int main()
{
typedef map<string,int>mapType;
mapType populationMap;
populationMap.insert(make_pair("Maharashtra", 125));
populationMap.insert(make_pair("Uttar Pradesh", 225));
populationMap.insert(make_pair("Bihar", 120));
populationMap.insert(make_pair("West Bengal", 100));
populationMap.insert(make_pair("Madhya Pradesh", 90));
populationMap.insert(make_pair("Tamil Nadu", 80));
populationMap.insert(make_pair("Rajasthan", 78));
populationMap.insert(make_pair("Andhra Pradesh", 53));
populationMap.insert(make_pair("Odisha", 47));
populationMap.insert(make_pair("Kerala", 38));
populationMap.insert(make_pair("Telangana", 37));
populationMap.insert(make_pair("Assam", 35));
populationMap.insert(make_pair("Jharkhand", 38));
populationMap.insert(make_pair("Karnataka", 68));
populationMap.insert(make_pair("Gujarat", 70));
populationMap.insert(make_pair("Punjab", 31));
populationMap.insert(make_pair("Chattisgarh", 30));
populationMap.insert(make_pair("Haryana", 29));
populationMap.insert(make_pair("UT Delhi", 19));
populationMap.insert(make_pair("UT Jammu and Kashmir", 14));
populationMap.insert(make_pair("Uttarakhand", 12));
populationMap.insert(make_pair("Himachal Pradesh", 8));
populationMap.insert(make_pair("Goa", 3));
populationMap.insert(make_pair("Mizoram", 2));
populationMap.insert(make_pair("Arunachal Pradesh", 4));

mapType::iterator iter = --populationMap.end();
populationMap.erase(iter);

cout<<"Total State and UT of India with Size of PopulationMap:"<<populationMap.size()<<'\n';
for(iter = populationMap.begin(); iter != populationMap.end(); ++iter)
{
cout<<iter->first<<":"<<iter->second<<"Million\n";
}
char c;
do
{
string state;
cout<<"\n Enter the State you want to know the Population of: ";
getline(cin, state);
iter = populationMap.find(state);
if 
(iter != populationMap.end())
cout<<state<<"'s population is "<<iter->second<<"Million\n";
else
cout<<"State is Not in populationMap"<<'\n';
cout<<"Do you wish to continue?(y/n):";
cin>>c;
}

while(c == 'y'||c == 'Y');
populationMap.clear();
return 0;
}
