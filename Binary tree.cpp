// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
vector<string> solar_sys = {"mer", "venus", "earth", "jupitor", "saturn", "neptune", "uranus"}
  
  vector<string>::iterator shivam = solar_sys.begin();
  vector<string>::ierator champa = solar_sys.begin();
  
  //cout<<"shivam is at"<< shivam<<endl;
  advance(shivam, 3);
  next(shivam,1);
  cout<<*next(shivam,1)<<endl;
  //cout<<"let's go to earth<< *(shivam+2)<<endl;
  
  return 0;
  
}
