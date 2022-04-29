#include <fstream>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  ifstream in_stream;
  char fn[50];
  cout<<"Enter a filename"<<endl;
  cin>>fn;
  in_stream.open(fn);
  if(in_stream.fail()){
    cout<< "Input file opening failed.  \n";
    exit(1);
  }
  vector<string> v;
  string temp;
  while(in_stream>>temp){
    v.push_back(temp);
  }

int count=0;

std::sort(v.begin(), v.end());  //using algorithms function to sort the words/strings in order

  for(int i=0;i<v.size()-1;i++){   //nested loop to test for duplicates in vector and remove any duplicates
      if(v[i]!=v[i+1]){
        cout<<v[i]<<" "<<count+1<<endl;  //prints out count
        count=0;
      }
      else{
        count++;
      }
  }
if(v.size()>0){
  cout<<v[v.size()-1]<<" "<<count+1<<endl;
}

  /*
  v[i]==v[i+1]
  v[i+1]==v[i+2]
  v[i+2]!=v[i+3];
  cout<<v[i+2];
  v[i+3]!=v[i+4]
  cout<<v[i+3];
  */


  in_stream.close();

  return 0;
}


//string random123[5] = {"33", "33", "33", "de0o", "eor", "ei30", "ei30", "ei30"}
