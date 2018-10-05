/*Comment:Write a C++ program to do the following:
                1. Enter the follwoing information:
                         Model
                         Year
                         Price
                         Had an accident? y or n
                2. Find car price after 20% discount
                3. If the price is less than or equal to 500 and the car has no accident display
                "Good", else display "Expensive".
                4. Finally display the car information.
*/
                
//Header
        #include<iostream>
        using namespace std;
        
//Global Variables

//Function Declaration

//Main Function
       int main()
       {
 
 //Local Variables
         
         string car_model;
         int car_year;
         float car_price,car_new_price;
         char accident;
         
 //Code          
           //Part.1
           
           cout<<"\n \t\t\t CAR REPAIR SHOP"<<"\n \t\t\t Enter car information";
           
           //needs ignore statement
           cout<<"\n Enter Car Model: ";
           getline(cin,car_model);
           
           cout<<"\n Enter Car Year: ";
           cin>>car_year;
           
           cout<<"\n Enter Car Price: ";
           cin>>car_price;
           
           cout<<"Had an accident?: y=yes n=no ";
           cin>>accident;
          
          //Part 2 
           cout<<"\n\n \t\t\t Find price after 20% discount";
           car_new_price=car_price-(car_price*0.2);
           cout<<"\n Price after 20% discount: "<<car_new_price;
           
           
           //Part 3
           if (car_new_price<=500 && accident=='n')
              {
                cout<<"Good";
                                  }
           else
              {
                cout<<"\n Expensive";                  
                                  }
                                  
           //Part 4
           
           cout<<"\n\n \t\t\t Car information";
           cout<<"\n Model: "<<car_model;
           cout<<"\n Year: "<<car_year;
           cout<<"\n Model: "<<car_model;
           cout<<"\n Price after 20% discount: "<<car_new_price;
           cout<<"\n Had an Accident: "<<accident<<endl;
           
           system ("pause");
           return 0;
           }
