/*represents a single order placed by supermarket on shortage of items from vendor(creates an instance of vendor-order)*/
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
#include "admin.cpp"

using namespace std;


class VendorOrder
{
    public:
	string vendorId;
	map<Item,int> orderDetails;
	string deliveryDate;

	  VendorOrder(map<Item,int> orderDetails,string vendorId,string deliveryDate)
	  {
         this->orderDetails=orderDetails;
         this->vendorId=vendorId;
         this->deliveryDate=deliveryDate;
	  }

         int calculateBill(map<Item,int> orderDetails)
         {
         	int bill=0;
         	 map<Item, int>::iterator itr1; 
             for(itr1=orderDetails.begin();itr1!=orderDetails.end();++itr1)
             {
             	int itemprice=(itr1->first).price;
             	int quantity=itr1->second;
                bill=bill+itemprice*quantity;
             }
             return bill;
         }



}