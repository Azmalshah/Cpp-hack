#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the no of terms in the fibonacci sequence ";
    cin>>n;
    
    int first =0,second=1;
    
    for(int i=0;i<n;i++)
    {
        if(i==0)
           cout<<first;
         else if (i==1)
         cout<<", "<<second;
         else{
             int next=first + second;
             cout<<", "<<next;
             first=second;
             second=next;
             
         }
    }
    cout<<endl;
}
