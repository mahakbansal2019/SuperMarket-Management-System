/*creates an instance of item*/
#include <iostream>
#include <cstring> 
#include <vector> 
#include <map>

#include "record.cpp"
#include "customer.cpp"
#include "database.cpp"
#include "order.cpp"
#include "staff.cpp"
#include "stock.cpp"
#include "VendorOrder.cpp"
#include "admin.cpp"

using namespace std;

class Item
{
   public:
     string item_id;
     string itemname;
     string brand;
     int price;
     int item_code;
     int discountPercentage;

    public:
    	Item(string item_id,string brand,int price,int discountPercentage,string itemname,int item_code)
    	{
           this->item_id=item_id;
           this->brand=brand;
           this->price=price;
           this->discountPercentage=discountPercentage;
           this->itemname=itemname;
           this->item_code=item_code;
    	}


      int getPrice()
      {
           return price;
      }  
      string getBrand()
      {
      	return brand;
      }	
      int getDiscount()
      {
      	return discountPercentage;
      }
      string getId()
      {
      	return item_id;
      }
      string getItemname()
      {
      	return itemname;
      }
       int getItemcode()
      {
      	return itemn_code;
      }


}