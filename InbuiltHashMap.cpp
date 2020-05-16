#include<iostream>
using namespace std;
#include<unordered_map>
#include<string>
int main()
{ unordered_map<string,int> ourmap;
pair<string,int> p("abc",1);
ourmap.insert(p);
ourmap["def"]=2;

//find or access the elements
cout<<ourmap["abc"]<<endl;
cout<<ourmap.at("abc")<<endl;
//cout<<ourmap.at("ghi")<<endl;
cout<<"size:"<<ourmap.size()<<endl;
cout<<ourmap["ghi"]<<endl;
cout<<"size:"<<ourmap.size()<<endl;
//Check Presence
if(ourmap.count("ghi")>0)
{
cout<<"ghi is present"<<endl;
}
//erase an element 
ourmap.erase("ghi");
cout<<"size:"<<ourmap.size()<<endl;
//Check Presence
if(ourmap.count("ghi")>0)
{
cout<<"ghi is present"<<endl;
}
return 0;
}
