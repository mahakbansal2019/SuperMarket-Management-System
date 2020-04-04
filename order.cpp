/*represents a single order placed by any customer in supermarket(creates an instance of order)*/
#include <iostream>
#include <iterator> 
#include <cstring> 
#include <vector> 

#include "items.cpp"
#include "record.cpp"
#include "customer.cpp"
#include "database.cpp"
#include "staff.cpp"
#include "stock.cpp"
#include "VendorOrder.cpp"
#include "admin.cpp"

#include <map>

using namespace std;

class Order
{
     public:
     	string dateOfPurchase;
     	string orderId;  //will be generated randomly
     	map<Item,int> itemsPurchased;

         Order(string orderId,string dateOfPurchase,map<itemsPurchased>)
         {
               this->orderId=orderId;
               this->dateOfPurchase=dateOfPurchase;
               this->itemsPurchased=itemsPurchased;

         }

         int calculateBill()
         {
         	int bill=0;
         	 map<Item, int>::iterator itr1; 
             for(itr1=itemsPurchased.begin();itr1!=itemsPurchased.end();++itr1)

             {
             	int itemprice=(itr1->first).price;
             	int quantity=itr1->second;
                bill=bill+itemprice*quantity;
             }
             return bill;
         }		

}