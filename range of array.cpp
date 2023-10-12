#include <iostream>

using namespace std;

int main()
{
     int a[2][3]={1,2,3,4,5,10};
   int max=a[0][0];
   int min=a[0][0];
   for(int i=0;i<2;i++)
   {
       for(int j=0;j<3;j++)
       {
           if(max<a[i][j])
           {max=a[i][j];}
           if(min>a[i][j])
           {min=a[i][j];}
       }
   }
   cout<<max-min;
}
