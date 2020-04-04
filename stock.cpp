/*stores the total availability of items available in supermarket and updates whenever an order is placed.*/
#include <iostream>
#include <iterator> 
#include <cstring> 
#include <vector> 
#include <map>

#include "items.cpp"
#include "record.cpp"
#include "customer.cpp"
#include "database.cpp"
#include "order.cpp"
#include "staff.cpp"
#include "VendorOrder.cpp"
#include "admin.cpp"

using namespace std;


class Stock
{
     public:
         map<Item,int> itemQuantityMap;
         //map itemsquantitymap contains items with unique item_code
        Stock stock = new Stock();

      void displayAll()
      {
             map<Item, int>::iterator itr1; 
             for(itr1=itemQuantityMap.begin();itr1!=itemQuantityMap.end();++itr1)
             {
                 cout<<(itr1->first).itemname<<"   Quantity available  :"<<itr1->second;
                 cout<<endl;

             }
      }   

      void displaySelected()
      {
             cout<<"Enter few initial letters of item you want to search"<<endl;
             string input;
             cin>>input;

             map<Item, int>::iterator itr1; 
             for(itr1=itemQuantityMap.begin();itr1!=itemQuantityMap.end();++itr1)
             {
                 string name=(itr1->first).itemname;

                 size_t found = name.find(input); 
                 if (found != string::npos) 
                 {
                  cout <<name<<endl; 
                 }
                 

             }


      }

     


        
}