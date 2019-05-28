#include<bits/stdc++.h>

int main ()
{
  std :: vector <int> v;
  std :: vector <int> :: iterator it;
  for (int i=1; i<=5; i++)
    v.push_back(i);

  std :: cout << "V contains:";
  for ( it = v.begin() ; it != v.end(); ++it)
    std::cout << ' ' << *it;


  return 0;
}
