#include<iostream>
using namespace std;
#define size 10
int n;
template <class T>
void selection(T a[size]){
	int min, i, j;
	T temp;
	for(i = 0; i < n; i++){
	min = i;
	for(j = i + 1; j < n; j++){
	if(a[j] < a[min])
	min = j;
	}
temp = a[i];
a[i] = a[min];
a[min] = temp;
}
cout<<"The Sorted List is: ";
for(i = 0; i < n; i++)
cout<<"\t"<<a[i];
}
int main(){
int i, a[size];
float b[size];
cout<<"INTEGER ELEMENTS"<<endl;
cout<<"How Many Elements are there: ";
cin>>n;
cout<<"Enter the Integer Elements"<<endl;
for(i = 0; i < n; i++)
cin>>a[i];
selection(a);
cout<<"\n\nFLOAT ELEMENTS"<<endl;
cout<<"How Many Elements are there: ";
cin>>n;
cout<<"Enter the Float Elements"<<endl;
for(i = 0; i < n; i++)
cin>>b[i];
selection(b);
return 0;
}



















