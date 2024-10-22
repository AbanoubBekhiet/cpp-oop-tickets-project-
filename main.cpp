#include<bits\stdc++.h>
#include "bodies.cpp"
using namespace std;
void clear_screen()
{
  printf( 
    "\033[2J"       // clear the screen
    "\033[1;1H" );  // move cursor home
}


int main(){
srand(time(0));  
clear_screen();
employee nam;
nam.addTravel("America",300,4,23,17,30);
nam.addTravel("Russia",500,5,4,7,0);
nam.addTravel("Egypt",700,2,23,11,30);
nam.addTravel("England",600,1,12,12,20);
nam.addNewEmployee("bebo","male","01283324043","abanoubbekhiet@gmail.com",19,123,400);
cout<<"*****************************************************************************************************";
cout<<"*****************************************************************************************************";
cout<<"*****************************[welcome to our booking tickets office]*********************************";
cout<<"*****************************************************************************************************";
start3:;
cout<<"to sign in as admin press (1) to sign in as customer press(2)\n";
int num;
cout<<"ُEnter your choice :";
cin>>num;
switch (num){
  case 1:{
    employee Employee;
    start4:;
   cout<<"Enter your id : ";
   int id;
   cin>>id;
   int pass;
   bool  r=0;
   cout<<"Enter your password : ";
   cin>>pass;
   int e;
   e=Employee.loginEmployee(pass,id);
    if(e==0)
    {
      cout<<"password or username is wrong to try again press(1),else press any number \n";
      cout<<"Enter your choice : ";
      int noo;
      cin>>noo;
      if(noo==1)
      goto start4;
    }
   start:;
cout<<"\n***************************************************************************************************\n";   
cout<<"*********************************to add new employee press(1)**************************************\n";
cout<<"*********************************to reset your password press (2)**********************************\n";
cout<<"*********************************to add new travel press (3)***************************************\n";
cout<<"*********************************to delete existing travel press (4)*******************************\n";
cout<<"*********************************to get travel info press (5)**************************************\n";
cout<<"*********************************to display existing travels press (6)*****************************\n";
cout<<"*********************************to add new customer press (7)*************************************\n";
cout<<"*********************************to updata customer email press (8)********************************\n";
cout<<"*********************************to updata customer phone number press (9)*************************\n";
cout<<"*********************************to delete customer press (10)*************************************\n";
cout<<"*********************************to display customer info press (11)*******************************\n";
cout<<"*********************************to search about customer  press (12)******************************\n";
cout<<"***************************************************************************************************\n"; 
cout<<"Enter your choice : ";
int num2;
cin>>num2;
switch(num2){
      case 1:{
        string name,gender,phoneNumber,Email;
        int age,password,salary;
        cout<<"Enter new employee name : ";
        cin>>name;
        cout<<"Enter new employee gender : ";
        cin>>gender;
        cout<<"Enter new employee phoneNumber : ";
        cin>>phoneNumber;
        cout<<"Enter new employee Email : ";
        cin>>Email;
        cout<<"Enter new employee age : ";
        cin>>age;
        cout<<"Enter new employee password : ";
        cin>>password;
        cout<<"Enter new employee salary : ";
        cin>>salary;
        Employee.addNewEmployee(name,gender,phoneNumber,Email,age,password,salary);
        int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start;
      }
      break;
      case 2:{
        int id,password;
        cout<<"Enter your old password : ";
        cin>>password;
        cout<<"Enter your id : ";
        cin>>id;
        Employee.resetEmployeePassword(password,id);
         int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start;
      }
      break;
      case 3:{
        string distination;
        int price,month,day,hour,minute;
        cout<<"Enter travel distination : ";
        cin>>distination;
        cout<<"Enter travel price : ";
        cin>>price;
        cout<<"Enter travel month : ";
        cin>>month;
        cout<<"Enter travel day : ";
        cin>>day;
        cout<<"Enter travel hour : ";
        cin>>hour;
        cout<<"Enter travel minute : ";
        cin>>minute;
        Employee.addTravel(distination,price,month,day,hour,minute);
         int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start;
      }
      break;
      case 4:{
        int id;
        cout<<"Enter travel ID you want to delete : ";
        cin>>id;
        Employee.deleteTravel(id);
        int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start;
      }
      break;
      case 5:{
        int id;
        cout<<"Enter travel ID you want to get its information : ";
        cin>>id;
        Employee.getTravelInfo(id);
         int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start;
      }
      break;
      case 6:{
        Employee.displayTravels();
        int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start;
      }
      break;
      case 7:{
        string name,gender,Email,phonenumber;
        int age;
        cout<<"Enter new customer name : ";
        cin>>name;
        cout<<"Enter new customer gender : ";
        cin>>gender;
        cout<<"Enter new customer phoneNumber : ";
        cin>>phonenumber;
        cout<<"Enter new customer Email : ";
        cin>>Email;
        cout<<"Enter new customer age : ";
        cin>>age;
        Employee.AddNewCustomer(name,age,gender,Email,phonenumber);
         int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start;
      }
      break;
      case 8:{
        string email;
        int id;
        cout<<"Enter customer id  : ";
        cin>>id;
        cout<<"Enter customer email you want to change to : ";
        cin>>email;
        Employee.updateCustomerEmail(email,id);
        int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start;
      }
      break;
      case 9:{
        string phonenumber;
        int id;
        cout<<"Enter customer id  : ";
        cin>>id;
        cout<<"Enter customer phone number you want to change to : ";
        cin>>phonenumber;
        Employee.updateCustomerPhoneNumber(phonenumber,id);
         int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start;
      }
      break;
      case 10:{
        int id;
        cout<<"Enter customer id  : ";
        cin>>id;
        Employee.deleteCustomer(id);
         int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start;
      }
      break;
      case 11:{
        int id;
        cout<<"Enter customer id  : ";
        cin>>id;
        Employee.displayCustomerInfo(id);
         int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start;
      }
      break;
      case 12:{
        int id;
        cout<<"Enter customer id  : ";
        cin>>id;
        bool q=0;
        q=Employee.searchCustomer(id);
        if(q==0)
        cout<<"customer not found \n";
        else
        cout<<"customer found\n";
         int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start;
      }
      break;
      default :{
        cout<<"invalid input to try again press (1) to exit press any key\n";
        int num;
        cout<<"Enter your choice\n";
        cin>>num;
        if(num==1)
        goto start;
      }
}}break;

case 2:{
start2:;  
cout<<"\n*******************************************************************************************\n";   
cout<<"*********************************to display booking info press(1)**************************\n";
cout<<"*********************************to book ticket press (2)**********************************\n";
cout<<"*********************************to search ticket id press (3)*****************************\n";
cout<<"*******************************************************************************************\n"; 
cout<<"Enter your choice : ";
int num;
cin>>num;
booking customer;
switch(num){
  case 1:{
     int id;
     cout<<"Enter id of the booking you want to saerch about : ";
     cin>>id;
     customer.displayBookingInfo(id);
     int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start2;
  }
  break;
  case 2:{
     for(int i=0;i<travelsData.size();i++){
      cout<<"the id of the journy is "<<travelsData[i].travelId<<" , travel distination is --> "<<travelsData[i].travelDistination;
      cout<<"\n";
      
     }
     cout<<"Enter tarvel id you want to book it : ";
     int travel_id;
     cin>>travel_id;
     customer.bookTicket(travel_id); 
     int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start2;
  }
  break;
  case 3:{
     int id;
     cout<<"Enter ticket id you want to search about : ";
     cin>>id;
      bool q=0;
     q=customer.searchTicketId(id);
     if(q==0){
      cout<<"ticket id not found\n";
     }
     else
     cout<<"ticket id is found\n";
     int no;
        cout<<"if you want to continue press(1) else press any number \n";
        cout<<"Enter your choice : ";
        cin>>no;
        if(no==1)
        goto start2;
  }
  break;
  default :{
    cout<<"invalid input to try again press (1) to exit press any key\n";
        int num;
        cout<<"Enter your choice\n";
        cin>>num;
        if(num==1)
        goto start2;
  }
}}break;
default:{
  cout<<"invalid input to try again press (1) to exit press any key\n";
        int num;
        cout<<"Enter your choice\n";
        cin>>num;
        if(num==1)
        goto start3;
}

}


return 0;
}
