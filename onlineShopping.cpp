/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
float onlineShopping(){
   
    float bill =0;
    cout << "   Press m/M for Mobile Phones " << endl;
    cout << "   Press s/S for Speakers " << endl;
    cout << "   Press l/L for Laptops " << endl << endl;
    
    char choice;
    cout << "Enter your choice to shop : " ;
    cin >> choice;
    
          //    Mobiles
    
    if(choice == 'm' || choice == 'M'){
        int count;
        cout << " (1) Apple     Price = 50,000 " << endl;
        cout << " (2) Oppo      Price = 30,000 " << endl;
        cout << " (3) Vivo      Price = 25,000 " << endl;
        cout << " (4) Redmi      Price = 10,000 " << endl << endl;
        cout << "Enter your choice : " ;
        cin >> count;
        if(count ==1){
            int qty;
             cout << " (1) Apple     Price = 50,000 " << endl;
             cout << "Enter Quantity :" << endl;
             cin >> qty;
             bill = bill + qty*50000;
        }
       else if(count ==2){
            int qty;
             cout << " (2) Oppo      Price = 30,000  " << endl;
             cout << "Enter Quantity :" << endl;
             cin >> qty;
             bill = bill + qty*30000;
        }
        else if(count ==3){
            int qty;
             cout << " (3) Vivo      Price = 25,000  " << endl;
             cout << "Enter Quantity :" << endl;
             cin >> qty;
             bill = bill + qty*25000;
        }
         else if(count ==4){
            int qty;
             cout << " (4) Redmi     Price = 10,000 " << endl;
             cout << "Enter Quantity :" << endl;
             cin >> qty;
             bill = bill + qty*10000;
        }
        
    }
          // Laptops
          
       if(choice == 'l' || choice == 'L'){
        int count;
        cout << " (1) Apple     Price = 90,000 " << endl;
        cout << " (2) Dell      Price = 70,000 " << endl;
        cout << " (3) Acer      Price = 60,000 " << endl;
        cout << " (4) HP        Price = 50,000 " << endl << endl;;
        cout << "Enter your choice : " ;
        cin >> count;
        if(count ==1){
            int qty;
             cout << " (1) Apple     Price = 90,000 " << endl;
             cout << "Enter Quantity :" << endl;
             cin >> qty;
             bill = bill + qty*90000;
        }
       else if(count ==2){
            int qty;
             cout << " (2) Dell      Price = 70,000  " << endl;
             cout << "Enter Quantity :" << endl;
             cin >> qty;
             bill = bill + qty*70000;
        }
        else if(count ==3){
            int qty;
             cout << " (3) Acer      Price = 60,000  " << endl;
             cout << "Enter Quantity :" << endl;
             cin >> qty;
             bill = bill + qty*60000;
        }
         else if(count ==4){
            int qty;
             cout << " (4) HP     Price = 50,000 " << endl;
             cout << "Enter Quantity :" << endl;
             cin >> qty;
             bill = bill + qty*50000;
        }
        
    }    
          //    speakers
    
    if(choice == 's' || choice == 'S'){
        int count;
        cout << " (1) JBL           Price = 10,000 " << endl;
        cout << " (2) Zebronics     Price = 8,000 " << endl;
        cout << " (3) boAt          Price = 5,000 " << endl;
        cout << " (4) Philips       Price = 3,000 " << endl << endl;;
        cout << "Enter your choice : " ;
        cin >> count;
        if(count ==1){
            int qty;
             cout << " (1) JBL     Price = 10,000 " << endl;
             cout << "Enter Quantity :" << endl;
             cin >> qty;
             bill = bill + qty*10000;
        }
       else if(count ==2){
            int qty;
             cout << " (2) Zebronics      Price = 8,000  " << endl;
             cout << "Enter Quantity :" << endl;
             cin >> qty;
             bill = bill + qty*8000;
        }
        else if(count ==3){
            int qty;
             cout << " (3) boAt      Price = 5,000  " << endl;
             cout << "Enter Quantity :" << endl;
             cin >> qty;
             bill = bill + qty*5000;
        }
         else if(count ==4){
            int qty;
             cout << " (4) Philips     Price = 3,000 " << endl;
             cout << "Enter Quantity :" << endl;
             cin >> qty;
             bill = bill + qty*3000;
        }
        
    }
    cout << "Your Total Bill : " << bill << endl;
        cout << "Do You want to shop again ?       y/Y  or n/N " << endl;
     char r;
        cin >> r;
        if (r == 'y' || r == 'Y'){
            cout << endl;
            onlineShopping();
            
        }
        else if (r == 'n' || r == 'N'){
            return 0;
        }
    return 0;
}


int main()
{   
    char start;
    float bill;
    cout << "Press s/S to start :" << endl;
    cin >> start;
    if(start == 's' || start == 'S'){
        cout << "Welcome to the Online Shopping" << endl;
        cout << "Please Follow the Instructions: " << endl;
        onlineShopping();
        cout << endl;
       cout << "     Thank You" << endl;
    }
    

    return 0;
}