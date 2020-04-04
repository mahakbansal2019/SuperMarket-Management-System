/*creates an instance of customer.*/
#include <iostream>
#include <cstring> 
#include <vector> 
#include <map>

#include "items.cpp"
#include "record.cpp"
#include "database.cpp"
#include "order.cpp"
#include "staff.cpp"
#include "stock.cpp"
#include "VendorOrder.cpp"
#include "admin.cpp"

using namespace std;

class Customer
{
	public :

       string name;
       string customer_id;
       string address;
       string phone_no;
      

       Customer(string name,string customer_id,string address,string phone_no,string creditCardNo)
       {
            this->name=name;
            this->customer_id=customer_id;
            this->address=address;
            this->phone_no=phone_no;
            this->creditCardNo=creditCardNo;

       }
        
        string getName()
        {
        	return name;

        }  
        string getId()
        {
        	return customer_id;
        }
        string getAddress()
        {
        	return address;	
        }
        string getPhone_no()
        {
        	return phone_no;
        }
        string getCreditCardNo()
        {
        	return creditCardNo;
        }
        vector<Order> getOrders()
        {
        	return orders;
        }


        Order placeOrder(map<Item,int> myorder)
        { 
            //map myorder contains items with unique id
            Order order= new Order(myorder);
            orders.add(order);
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
        
        void cancelOrder(string orderId)
        {
        	 
             for (int i = orders.begin(); i != orders.end(); ++i) 
              {
                  if(*i==orderId)
                  {
                  	*i.~Order();
                  }
              }
  
        }


    private:
       string creditCardNo;
       vector orders<Order>;
       void setName(string name)
    	{
           this->name=name;
    	}
    	void setAddress(string address)
    	{
           this->address=address;
    	}
    	void setPhoneNo(string phone_no)
    	{
           this->phone_no=phone_no;
    	}
    	void setCreditCardNo(string creditCardNo)
    	{
           this->creditCardNo=creditCardNo;
    	}

}