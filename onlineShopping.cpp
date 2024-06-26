#include<iostream>
using namespace std;

float onlineShopping(){
    level:
   
    float bill =0;
    cout << "   Press m/M for Mobile Phones " << endl;
    cout << "   Press s/S for Speakers " << endl;
    cout << "   Press l/L for Laptops " << endl << endl;
    
    char choice;
    cout << "Choose your Item : " ;
    cin >> choice;
    
          //    Mobiles
    
    if(choice == 'm' || choice == 'M'){
        mobilelevel:
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
        else {
            cout << "You entered wrong input , Type again :" << endl;
            goto mobilelevel;
        }
        
    }
          // Laptops
          
       if(choice == 'l' || choice == 'L'){
        laptoplevel:
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
        else {
            cout << "You entered wrong input , Type again :" << endl;
            goto laptoplevel;
        }
        
    }    
          //    speakers
    
    if(choice == 's' || choice == 'S'){
        speakerlevel:
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
        else {
            cout << "You entered wrong input , Type again :" << endl;
            goto speakerlevel;
        }
        
    }
        else{
            cout << "You entered the wrong input, Please Try again:" << endl;
            goto level;
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

void start(){
    char s;
    cin >> s;
    if(s == 's' || s == 'S'){
        cout << "Welcome to the Online Shopping" << endl;
        cout << "Please Follow the Instructions: " << endl;
        onlineShopping();
        cout << endl;
       cout << "     Thank You" << endl;
    }
    else{
        cout << "You Entered the wrong input " << endl;
        cout << "Please Try again " << endl;
        start();
    }
}


int main()
{   
    
    float bill;
    cout << "Press s/S to start :" << endl;
    start();
    
    

    return 0;
}