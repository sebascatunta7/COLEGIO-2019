#include<iostream>
using namespace std;
int main()
{
 bool p;
 int x;
 cin>>x;
 if(x>99)
 {
     cout<<"tu numero es grande";
     cin>>x;
     if(x>99)
     {
         cout<<"tu numero es grande";
     }
     else
     {
          cout<<"tu numero es pequenio";
     }
 }
 return 0;
}

