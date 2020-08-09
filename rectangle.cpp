#include <iostream>
using namespace std;
class area 
{
      float width, lenght, areaofrect; 
      public:
      area() 
      {
          width=1;
          lenght=1;
          areaofrect=0;
      }
      
      void setwidth() 
      {
           again:
           cout<<"Enter width of rectangle: ";
           cin>>width;
           if(width<0 || width>20)
           {
                  cout<<"You cannot enter width greater than 20 and less than 0.\nEnter Valid Input."<<endl;
                  goto again;
           }
      }
      void setlenght() 
      {
           again:
           cout<<"Enter lenght of rectangle: ";
           cin>>lenght;
           if(lenght<0 || lenght>20)
           {
                  cout<<"You cannot enter lenght greater than 20 and less than 0.\nEnter Valid Input."<<endl;
                  goto again;
           }
      }
      void calculation() 
      {
           areaofrect=width*lenght; 
      }
      void display() 
      {
           cout<<"Area of rectangle according to given parameters is: "<<areaofrect<<endl;
      }
    
};
main()
{
      again:  
      area c; 
      char ask;
      
      c.setwidth();
      c.setlenght();
      c.calculation();
      c.display();
      
      cout<<"You want to calculate again? Y/N ";
      cin>>ask;
      if(ask=='Y' || ask== 'y')
      {
            goto again;
      }
}

