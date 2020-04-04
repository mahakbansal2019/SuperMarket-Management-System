/*all the data of employees,customers and all the orders placed until now is saved here. */
#include <iostream>
#include <cstring> 
#include <vector> 
#include <map>

#include "items.cpp"
#include "record.cpp"
#include "customer.cpp"
#include "order.cpp"
#include "staff.cpp"
#include "stock.cpp"
#include "VendorOrder.cpp"
#include "admin.cpp"

using namespace std;

class Database
{
     public:
     	vector<Staff> employee;
     	vector<Customer> customers;
        vector<Order> purchasesmade;
     	
     private:
        void updateStaff()
        {
        	cout<<"Enter the username of staff"<,endl;
        	string username;
        	cin>>username;
        	cout<<"Enter your choice"<<endl;
        	cout<<"1.Modify salary"<<endl;    
        	cout<<"2.Modify role"<<endl;
        	cout<<"3.Exit"<<endl;
        	int choice;
        	cin>>choice;

            
            while(choice!=3)
            switch(choice)
            {
               case 1:
                  cout<<"Enter new salary"<<endl;
                  int newsalary;
                  cin>>newsalary;
                  for (int i = employee.begin(); i != employee.end(); ++i) 
                 {
                  if(*i.username==username)
                  {
                      *i.salary=newsalary;
                  }
                 }
                 break;

                case 2:
                   cout<<"Enter new role"<<endl;
                    string newrole;
                    cin>>newrole;
                  for (int i = employee.begin(); i != employee.end(); ++i) 
                 {
                  if(*i.username==username)
                  {
                      *i.role=newrole;
                  }
                 }
                  break;

                  case 3:
                     exit(0);


            }

      	 } 	


      	 void addStaff()
      	 {
      	 	cout<<"Enter username"<<endl;
      	 	string username;
      	 	cin>>username;

      	 	cout<<"Enter salary"<<endl;
      	 	int salary;
      	 	cin>>salary;

      	 	cout<<"Enter role"<<endl;
      	 	string role;
      	 	cin>>role;

      	 	cout<<"Enter date of joining"<<endl;
      	 	string DOJ;
      	 	cin>>DOJ;

      	 	Staff object= new Staff(username,salary,role,DOJ);
      	 	employee.add(object);


      	 }


      	 void deleteStaff()
      	 {
      	 	string username;
      	 	cout<<"Enter username of staff you want to delete"<<endl;
      	 	cin>>username;

      	 	    for (int i = employee.begin(); i != employee.end(); ++i) 
                 {
                  if(*i.username==username)
                  {
                      *i.~Staff();
                  }
                 }
      	 }

      	 void addCustomer()
      	 {
      	 	cout<<"Enter name"<<endl;
      	 	string name;
      	 	cin>>name;

      	 	cout<<"Enter address"<<endl;
      	 	string address;
      	 	cin>>address;


      	 	cout<<"Enter phone number"<<endl;
      	 	string phone_no;
      	 	cin>>phone_no;

      	 	cout<<"Enter credit card number"<<endl;
      	 	string crediCardNo;
      	 	cin>>crediCardNo;

      	 	//generate id randomly
             
            Customer object = new Customer(name,address,phone_no,crediCardNo,id);
            customers.add(object);

      	 }
        

         void updateCustomer()
        {
        	cout<<"Enter the username of staff"<,endl;
        	string username;
        	cin>>username;
        	cout<<"Enter your choice"<<endl;
        	cout<<"1.Modify address"<<endl;    
        	cout<<"2.Modify phone number"<<endl;
        	cout<<"3.Exit"<<endl;
        	int choice;
        	cin>>choice;

            
            while(choice!=3)
            switch(choice)
            {
               case 1:
                  cout<<"Enter new address"<<endl;
                  int newaddress;
                  cin>>newaddress;
                  for (int i = customers.begin(); i != customers.end(); ++i) 
                 {
                  if(*i.id==id)
                  {
                      *i.address=newaddress;
                  }
                 }
                 break;

                case 2:
                   cout<<"Enter new phone number"<<endl;
                    string newnumber;
                    cin>>newnumber;
                  for (int i = customers.begin(); i != customers.end(); ++i) 
                 {
                  if(*i.id==id)
                  {
                      *i.phone_no=newnumber;
                  }
                 }
                  break;

                  case 3:
                     exit(0);


            }

      	 } 	






}