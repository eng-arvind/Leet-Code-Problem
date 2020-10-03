#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif
  string data;
  cout<<"Enter data"<<endl;
  cin>>data;
  int count=0;
  for(int i=0;i<data.length();i++)
  {
    if(data.at(i)=='1')
    count++;
    if(count==5)
    {
    data.insert(i+1,"0");
    count=0;
      }
    if(data.at(i)=='0')
    count=0;
  }
  cout<<"Bit Stuffing="<<data<<endl;
  count=0;
  int len=data.length();
  for(int i=0;i<len;i++)
  {
    if(data.at(i)=='1')
    count++;
    if(count==5)
    {
      data.erase(i+1,1);
      count=0;
      len=data.length();
    }
    if(data.at(i)=='0')
    count=0;
  }
  cout<<"De Stuffing="<<data<<endl;
  return 0;
}
