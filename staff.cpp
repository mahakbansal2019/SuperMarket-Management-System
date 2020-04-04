/*creates an instance of employee*/
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
#include "stock.cpp"
#include "VendorOrder.cpp"
#include "admin.cpp"


using namespace std;

class Staff
{
   public:

	string username;
	int salary;
	string DOJ;
	int role_id;

	Staff(string username,int salary,string DOJ,int role_id)
	{
       this->username=username;
       this->salary=salary;
       this->DOJ=DOJ;
       this->role_id=role_id;
	}

	string getusername()
	{
		return username;	
	}
	string getDOJ()
	{
		return DOJ;
	}
	int getSalary()
	{
		return salary;
	}

     private:

     	void setSalary(int newsalary)
     	{
           salary=newsalary;
     	}


   
}