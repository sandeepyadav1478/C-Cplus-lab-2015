#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b,c;
  cout<<"\n Enter three values: ";
  cin>>a>>b>>c;
  c=a-b;
  try
  {
      if(c==0)
      {
          throw(c);
      }
      else
      {
           cout<<"\n Answer will be: "<<c;
      }
  }
  catch(int i)
  {
      cout<<"\n Answer will be infinite";
  }
  getch();
}
