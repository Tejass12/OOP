#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
using namespace std;
int main(){
char name[20];
cout<<"Enter the Name of File"<<endl;
cin>>name;
ofstream fout;
fout.open(name);
if(!fout){
cout<<"Error in Opening File"<<endl;
exit(1);
}
cout<<"Enter Contents of The File and end it with ^D"<<endl;
string data;
while(getline(cin, data)){
if(data == "^D")
break;
fout<<data<<endl;
}
fout.close();
ifstream fin;
fin.open(name);
if(!fin){
cout<<"Error in Opening File"<<endl;
exit(1);
}
cout<<"Reading from File"<<endl;
while(fin){
getline(fin, data);
cout<<data;
}
fin.close();
return 0;
}
