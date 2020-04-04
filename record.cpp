/*maintains all the accounts, total sales ,expenses, profits and loss*/
#include <iostream>
#include <iterator> 
#include <cstring> 
#include <vector> 
#include <map>

#include "items.cpp"
#include "customer.cpp"
#include "database.cpp"
#include "order.cpp"
#include "staff.cpp"
#include "stock.cpp"
#include "VendorOrder.cpp"
#include "admin.cpp"

using namespace std;
class Record
{
    public:
    	map<Item,int> mapsold;  //contains prices at which  items were sold by supermarket
    	map<Item,int> mapbought; //contains prices at which items were bought by supermarket

             int totalSales=0;
             map<Item, int>::iterator itr1; 
             for(itr1=mapsold.begin();itr1!=mapsold.end();++itr1)
             {
             	int itemprice=(itr1->first).price;
             	int quantity=itr1->second;
                totalSales=totalSales+itemprice*quantity;
             }

             int totalExpenses=0;
             map<Item, int>::iterator itr1; 
             for(itr1=mapsold.begin();itr1!=mapsold.end();++itr1)
             {
             	int itemprice=(itr1->first).price;
             	int quantity=itr1->second;
                totalExpenses=totalExpenses+itemprice*quantity;
             }

             int totalProfit=0;
             totalProfit=calculateSales(mapsold)-calculateTotalExpenses(mapbought);

         
        int getTotalSales()
        {
            return totalSales;
        } 

        int getTotalProfit()
        {
             return totalProfit;
        }

        int getTotalExpenses()
        {
             return totalExpenses;
        }   
     

}