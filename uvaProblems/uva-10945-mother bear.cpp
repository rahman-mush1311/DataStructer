#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str3;
    int j;

   while(getline (cin,str1)){

    if(str1=="DONE")
    break;
    string str2;
    j=0;
    for(int i=0;i<str1.size();i++)
     {
         if(str1[i]>='a' && str1[i]<='z' || str1[i]>='A' && str1[i]<='Z'){
            str2.push_back(toupper(str1[i]));
            j++;
         }

    }
    str3=str2;

    reverse(str2.begin(),str2.end());

    if(str2==str3)
    cout<<"You won't be eaten!"<<endl;
    else
    cout<<"Uh oh.."<<endl;
   }
return 0;

}
