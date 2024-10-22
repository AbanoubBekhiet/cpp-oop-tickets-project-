     #include<bits/stdc++.h>
     #include "headers.cpp"
     using namespace std;
     using namespace std::chrono;

     
     //**********************************************************customer class************************************************

     
     bool customer::searchCustomreId(int id){
          int start=0,end=customerIdVector.size()-1;
          int mid=(start+end)/2;
          while(start<=end){
               mid=(start+end)/2;
               if(customerIdVector[mid]==id)
               return true;
               else if(customerIdVector[mid]>id)
               end=mid-1;
               else
               start=mid+1;
          }
          return false;
     }

     int customer:: generateCustomerId(){
          int num=rand()%(8000-4001+1)+4001;
          if(searchCustomreId(num)==true)
          generateCustomerId();
          else{
          customerIdVector.push_back(num);
          return num;
          }
          return 0;
     }

     void customer :: AddNewCustomer( string customerNamee,int customerAgee,string customerGenderr,string customerEmaill,string customerPhoneNumberr )  {
     customer newCustomer;
     int num= generateCustomerId();
     this->customerId=num;
     newCustomer.customerId=num;
     customerName=customerNamee;   
     newCustomer.customerName=customerNamee;
     customerAge=customerAgee;   
     newCustomer.customerAge=customerAgee;
     customerEmail=customerEmaill;   
     newCustomer.customerEmail=customerEmaill;
     customerGender=customerGenderr;   
     newCustomer.customerGender=customerGenderr;
     customerPhoneNumber=customerPhoneNumberr;
     newCustomer.customerPhoneNumber=customerPhoneNumberr;
     customersIds.push_back(newCustomer);
     }
  

     void customer:: updateCustomerEmail(string customerEmaill,int id) {
     bool q=0;
     for(int i=0;i<customersIds.size();i++){
          if(customersIds[i].customerId==id){
               q=1;
               customersIds[i].customerEmail=customerEmaill;
               cout<<"customer Email has been updated successfully\n";
          }
     }
     if(q==0)
     cout<<"not existed customer id\n";
     }

     void customer:: updateCustomerPhoneNumber(string customerPhoneNumber,int id){
     bool q=0;
     for(int i=0;i<customersIds.size();i++){
          if(customersIds[i].customerId==id){
               q=1;
               customersIds[i].customerPhoneNumber=customerPhoneNumber;
               cout<<"customer phonenumber has been updated successfully\n";
          }
     }
     if(q==0)
     cout<<"not existed customer id\n";
     }

     void customer:: deleteCustomer(int customerId){
     bool w= searchCustomer(customerId);
     if(w==0)
     cout<<"customer not found\n";
     else
     for(int i=0;i<customersIds.size();i++)
     if(customersIds[i].customerId==customerId)
     customersIds.erase(customersIds.begin()+i);
     cout<<"customer has been deleted successfully\n";
     }

     bool customer:: searchCustomer(int id){
       for(int i=0;i<customersIds.size();i++){
          if(customersIds[i].customerId==id){
               return true ;
          }
       }
       return false;
     }
     void customer:: displayCustomerInfo(int Id){
     bool q=searchCustomer(Id);
     if(q==false){
          cout<<"customer not found\n"; 
          }
     else{
     for(int i=0;i<customersIds.size();i++)
     if(customersIds[i].customerId==Id)
     {
     cout<<"customer name is "<<customerName<<"\n";
     cout<<"customer phone number is "<<customerPhoneNumber<<"\n";
     cout<<"customer email is "<<customerEmail<<"\n";
     cout<<"customer gender is "<<customerGender<<"\n";
     cout<<"customer age is "<<customerAge<<"\n";    
     } 
     }


     }


//************************************************************employee class**********************************************************

bool employee::searchemployeeId(int id){
          int start=0,end=employeeIdVector.size()-1;
          int mid=(start+end)/2;
          while(start<=end){
               mid=(start+end)/2;
               if(employeeIdVector[mid]==id)
               return true;
               else if(employeeIdVector[mid]>id)
               end=mid-1;
               else
               start=mid+1;
          }
          return false;
     }

     int employee:: generateemployeelId(){
          int num=rand()%(16000-12001+1)+12001;
          if(searchemployeeId(num)==true)
          generateemployeelId();
          else{
          employeeIdVector.push_back(num);
          return num;
          }
          return 0;
     }

     
void employee::addNewEmployee(string employeeNamee,string employeeGenderr,string employeePhoneNumberr,string employeeEmaill,int employeeAgee,int employeePasswordd,int employeeSalaryy){
     employee newEmployee;
     int num=generateemployeelId();
     cout<<"your id is : "<<num<<"\n";
     employeeId=num;
     newEmployee.employeeId=num;
     employeeName=employeeNamee;
     newEmployee.employeeName=employeeNamee;
     employeeGender=employeeGenderr;
     newEmployee.employeeGender=employeeGenderr;
     employeePhoneNumber=employeePhoneNumberr;
     newEmployee.employeePhoneNumber=employeePhoneNumberr;
     employeeEmail=employeeEmaill;
     newEmployee.employeeEmail=employeeEmaill;
     employeeAge=employeeAgee;
     newEmployee.employeeAge=employeeAgee;
     employeeSalary=employeeSalaryy;
     newEmployee.employeeSalary=employeeSalaryy;
     employeePassword=employeePasswordd;
     newEmployee.employeePassword=employeePasswordd;
     employeeVector.push_back(newEmployee);
}

bool employee::loginEmployee(int employeePassword,int id){
     bool q=0;
     int ww;
     for(int i=0;i<employeeVector.size();i++){
          if(employeeVector[i].employeeId==id){
               q=1;
               ww=i;
               break;
          }
     }
     if(q==1){
     if(employeeVector[ww].employeePassword==employeePassword)
     cout<<"welcome "<<employeeVector[ww].employeeName<<"\n";
     else
     return q;
     }
     else
     return q;
    return q;
}
void employee::resetEmployeePassword(int oldPassword,int id){
     bool q=0;
     int num;
     for(int i=0;i<employeeVector.size();i++){
        if(employeeVector[i].employeeId==id){
          q=1;
          num=i;
          break;
        }
     }
     if(q==1){
     if(employeeVector[num].employeePassword==oldPassword){
     cout<<"enter new password you want to change to\n";
     int pass;
     cin>>pass;   
     employeeVector[num].employeePassword=pass;
     cout<<"your password has been successsfully changed to "<<pass<<"\n";
     }
     else{
          cout<<"wrong password try agian\n";
     }  
     }
     else
     cout<<"employee id not found\n";
    
}


//**********************************************************travel class************************************************

bool travel::searchTravelId(int id){
          int start=0,end=travelIdVector.size()-1;
          int mid=(start+end)/2;
          while(start<=end){
               mid=(start+end)/2;
               if(travelIdVector[mid]==id)
               return true;
               else if(travelIdVector[mid]>id)
               end=mid-1;
               else
               start=mid+1;
          }
          return false;
     }

     int travel:: generateTravelId(){
          int num=rand()%(12000-8001+1)+8001;
          if(searchTravelId(num)==true)
          generateTravelId();
          else{
          travelIdVector.push_back(num);
          return num;
          }
     return 0;
     }

void travel:: addTravel(string travelDistination,int travelPrice,int mo,int da,int hou,int mi){
     travel newTravel;
     int num=generateTravelId();
     this->travelDistination=travelDistination;
     newTravel.travelDistination=travelDistination;
     this->travelPrice=travelPrice;
     newTravel.travelPrice=travelPrice;
     this->travelId=num;
     newTravel.travelId=num;
     traveltime.month=mo;
     newTravel.traveltime.month=mo;
     traveltime.day=da;
     newTravel.traveltime.day=da;
     traveltime.hour=hou;
     newTravel.traveltime.hour=hou;
     traveltime.minute=mi;
     newTravel.traveltime.minute=mi;
     travelsData.push_back(newTravel);
     cout<<"travel has been added successfully\n";
}

void travel :: deleteTravel(int travelId){
     bool q=0;
     for(int i=0;i<travelsData.size();i++)
     {
          if(travelsData[i].travelId==travelId){
             travelsData.erase(travelsData.begin()+i); 
             cout<<"your travel has been canceled successfully \n"; 
             q=1; 
             break;
          }
     }
if(q==0)
cout<<"travel not found\n";
}

int  travel:: getTravelInfo(int tarvelId){
     bool q=0;
     for(int i=0;i<travelsData.size();i++)
     {
          if(travelsData[i].travelId==travelId){
             cout<<"travel distination is for "<<travelDistination<<"\n";
             cout<<"travel price is for "<<travelPrice<<"\n";
             cout<<"travel time is for "<<traveltime.month<<" "<<
             traveltime.day<<" "<<traveltime.hour<<" "<<traveltime.minute<<"\n";
             return 0;
          }
     }
if(q==0)
cout<<"travel not found\n";
return 0;
}

void travel::displayTravels(){
     if(travelsData.size()==0)
     {
          cout<<"there not any travel to display\n";
          goto end;
     }
     cout<<travelsData.size();
     for(int i=0;i<travelsData.size();i++)
     {       cout<<"travel code is "<<travelsData[i].travelId<<"\n";
             cout<<"travel distination is for "<<travelsData[i].travelDistination<<"\n";
             cout<<"travel price is for "<<travelsData[i].travelPrice<<"\n";
             cout<<"travel time is for "<<travelsData[i].traveltime.month<<"/"<<
             travelsData[i].traveltime.day<<"/ "<<travelsData[i].traveltime.hour<<"/ "<<travelsData[i].traveltime.minute<<"\n";
             cout<<"\n\n";
     }
     end:;
}


//**********************************************************Booking class************************************************
string booking::bookingTime(){
system_clock::time_point now = system_clock::now();    
    time_t currentTime = system_clock::to_time_t(now);    
    string timeStr = ctime(&currentTime);                
    return timeStr;
}

bool booking:: searchTicketId(int num){
   int start=0,end=ticketIds.size()-1;
   int mid;
   while(start<=end){
     mid=(start+end)/2;
     if(num==ticketIds[mid])
     return true;
     else if(num>ticketIds[mid])
     start=mid+1;
     else
     end=mid-1;
   }
   return false;
}


int booking:: generateTicketId(){
     int num=rand() %4000+1; 
          if(searchTicketId(num)==true)
               generateTicketId();
     ticketIds.push_back(num);
     sort(ticketIds.begin(),ticketIds.end());
     return num; 
} 



void booking:: bookTicket(int travel_id){
     bool q=0;
     int ww;
     for(int i=0;i<travelsData.size();i++){
          if(travelsData[i].travelId==travel_id){
            q=1;
            ww=i;
            break;
          }
     }
     if(q==0){
          cout<<"invalid travel code\n";
     }
     else{
          ticketId=generateTicketId();
          cout<<"your ticket  has been booked successfully\n"<<" and your ticket id is";
          cout<<ticketId<<"\n and your travil time is "<<getTravelInfo(travel_id)<<"\n";
          
          booking newBook;
          newBook.ticketId=ticketId;
          newBook.travelId=travelId;
          newBook.bookingtime=bookingTime();
          bookingVector.push_back(newBook);
          newBook.bookingdetailedTime=travelsData[ww].traveltime;
          cout<<"your ticket has been successfully booked and your ticket id is : "<<ticketId<<"\n";
     }
     
}

void booking:: displayBookingInfo(int bookingId){
     bool q=0;
     for(int i=0;i<bookingVector.size();i++){
       if(bookingVector[i].bookingId==bookingId)
       {
          q=1;
          cout<<"your booking time is"<<bookingVector[i].bookingtime<<"\n";
          cout<<"your ticket id is"<<bookingVector[i].ticketId<<"\n";
          cout<<"your travel time"<<bookingVector[i].bookingdetailedTime.month<<"/"
          <<bookingVector[i].bookingdetailedTime.day<<"/"<<
          bookingVector[i].bookingdetailedTime.hour<<"/"<<
          bookingVector[i].bookingdetailedTime.minute<<"\n";
       }
     }
     if(q==0)
     cout<<"booking id is not found\n";
     }

