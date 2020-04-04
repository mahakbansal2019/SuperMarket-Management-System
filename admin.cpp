/*manages data of new or leaving employees, manages customers database and their orders, places venodororders 
thus maintains database . Also only he has access to data stored in record and stocks , and check their updation*/

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
#include "stock.cpp"
#include "VendorOrder.cpp"


using namespace std;

class Admin: public Staff
{
    private:

    	Record getRecord()
    	{
            Record obj= new Record();
            return obj;

    	}
    	Database getDatabase()
    	{
              Database obj = new Database();
              return obj;
    	}

    	Stock getStock()
    	{
               Stock obj = new Stock();
               return obj;

    	}


        Order placeVendorOrder(map<Item,int> myorder)
        { 
            //map myorder contains items with unique id
            Order order= new Order(myorder);
           
           //map itemsquantitymap contains items with unique item_code
             map<Item, int>::iterator itr1;
             for(itr1=myorder.begin();itr1!=myorder.end();++itr1)
             { 
                int code=(itr1->first).item_code;

               map<Item, int>::iterator itr2; 
               for(itr2=itemQuantityMap.begin();itr2!=itemQuantityMap.end();++itr2)
               {
                  if((itr2->first).item_code==code)
                  {
                    itr2->second=(itr2->second)-1;
                  }
               }

             }

            return Order;
        }





}