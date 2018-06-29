#include "employee.h"
using namespace std;

const int MAX = 100;

//This code is to test out the hierarchy of the clases created
int main()
{
    char temp[MAX];
    char response;
    
    //experiment with the hourly employee class


    
       cout << "place name, street, zip " << endl; 
       char new_name[100];
       char new_street[100];
       char new_zip[100];

       cin.get(new_street, 100, '\n');
       cin.ignore(100, '\n');
       cin.get(new_street, 100, '\n');
       cin.ignore(100, '\n');
       cin.get(new_zip, 100, '\n');
       cin.ignore(100, '\n');
       //person_applying.address_wrapper(new_street, new_zip);
    person person_applying(new_name, new_street, new_zip);
    do
    {
       hourly_employee new_hire;
       cout <<"What is the name of the person applying for a job\n";
       person_applying.read();
       cout <<"\nWe received information about this person:\n";
       person_applying.display();
    
       cout <<"\nWould you like to hire them? Y or N ";
       cin >>response; cin.ignore(MAX,'\n');
       if (toupper(response) == 'Y')
       {
          new_hire.hire(person_applying);

          do
          {        
              cout <<"\nPlease enter their periodic performance review: ";
              cin.get(temp, MAX,'\n'); 
              cin.ignore(MAX, '\n');

              new_hire.performance_review(temp);
          } while (again());

          cerr <<"\n\nThis is the complete informatin about the new hire... ";
          new_hire.display();
       }
    } while (again());
    
    
    return 0;
}
    
