#include<bits\stdc++.h>
using namespace std;


//**********************************************************customer class************************************************
class customer {

private:
     int customerId;
     string customerName;
     int customerAge;
     string customerGender;
     string customerEmail;
     string customerPhoneNumber;

public:
    int generateCustomerId();
    bool searchCustomreId(int id);
    void AddNewCustomer( string customerNamee,int customerAgee,string customerGenderr,string customerEmaill,string customerPhoneNumberr )  ;
    void updateCustomerEmail(string customerEmaill,int id) ;
    void updateCustomerPhoneNumber(string customerPhoneNumber,int id) ;
    void deleteCustomer(int customerId);
    void displayCustomerInfo(int customerId);
    bool searchCustomer(int customerId);

};
    vector<customer>customersIds;
    vector<int>customerIdVector;


//**********************************************************travel class************************************************
class travel{
public:
struct time{
    int month;
    int day;
    int hour;
    int minute;
    };
    int generateTravelId();
    bool searchTravelId(int id);
    void addTravel(string travelDistination,int travelPrice,int mo,int da,int hou,int mi);
    void deleteTravel(int travelId);
    int getTravelInfo(int tarvelId);
    void displayTravels();
    int travelId;
    time traveltime;
    string travelDistination;

private:
       int travelPrice;
       

};
vector<travel>travelsData;
vector<int>travelIdVector;
//**********************************************************employee class************************************************

class employee :public travel,public customer{
private:    
    int employeeId;
    string employeeName;
    string employeeGender;
    string employeePhoneNumber;
    string employeeEmail;
    int employeeAge;
    int employeeSalary;
    int employeePassword;
public:
    int generateemployeelId();
    bool searchemployeeId(int id);
    bool loginEmployee(int employeePasswordm,int id);
    void addNewEmployee(string employeeName,string employeeGender,string employeePhoneNumber,string employeeEmail,int employeeAge,int employeePassword,int customerSalary);
    void resetEmployeePassword(int oldPassword,int id);
};
vector<employee>employeeVector;
vector<int>employeeIdVector;


//**********************************************************Booking class************************************************
class booking:public travel{
private: 
       string bookingtime;
       int bookingId;
       time bookingdetailedTime;
public:
       int ticketId;
       string bookingTime();
       void displayBookingInfo(int bookingId);
       int generateTicketId();
       void bookTicket(int travel_id);
       bool searchTicketId(int num);
       
};
vector<booking>bookingVector;
vector<int>ticketIds;