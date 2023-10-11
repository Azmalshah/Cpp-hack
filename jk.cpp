class A
   {
       private:
              int a;
       public:
              int b;
              
              void f1()
              {
                  cin>>a>>b;
              }
              void f2()
              {
                  cout<<a<<b;
              }
   }
   ;
   int main()
   {
       A obj1,obj2;
       
      
       obj1.f1();
       obj2.f2();
       obj1.f2();
       obj2.f1();
       
   
   }
