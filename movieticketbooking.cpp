#include<iostream>
#include<unistd.h>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>

using namespace std;
void updateseats();
void updateseats(int seats,int seatarray[],int multiseats);

class Colors{//INHERITENCE (DIAMOND OF THE DEATH)
   public:
   Colors(){//CONSTRUCTOR
     system("CLS");
   }
   ~Colors(){//DESTRUCTOR

   }
   
   void red();
   void yellow();
   void reset ();
   void green();
   void blue();
   void cyan();
   void white();
   friend void intro(int );//FRIEND FUNCTION


}t;
class Cities:virtual public Colors{//VIRTUAL CLASS
    private:
    public:
    int loci;
    string loc;
     void citshow(){

        t.yellow();
    cout<<"Cities:\n";
    cout<<"\n";
    cout<<"1.Mumbai        ";
    cout<<"2.Delhi         ";
    cout<<"3.Banglore      ";
    cout<<"4.Hyderabad     ";
    cout<<"5.Chennai       ";
    cout<<"6.Kolkata       \n\n";
    cout<<"7.Lucknow       ";
    cout<<"8.Visakapatnam      ";
    cout<<"9.Pune          ";
    cout<<"10.Chandigarh   ";
    cout<<"\n";

    t.reset();
    }
     void citsel(){
        cout<<"Please select a location:";
        cin>>loci;
    
      if(loci==1){
     loc="Mumbai";
    }
    else if(loci==2){
     loc ="Delhi";
    }
    else if(loci==3){
     loc = "Banglore";
    }
    else if(loci==4){
     loc="Hyderabad";
    }
    else if(loci==5){
      loc = "Chennai";  
    }
    else if(loci==6){
     loc="Kolkata";
    }
    else if(loci==7){
      loc = "Lucknow"; 
    }
    else if(loci==8){
     loc="Visakapatnam";
    }
    else if(loci==9){
      loc = "Pune"; 
    }
    else if(loci==10){
      loc = "Chandigarh";
    }
     }
};

class Moviedetails:virtual public Cities{
    private:

   public:
    int movi;string mov;int lani;string lan;

   int formi;string form;string dur;string cate;string genre;

   void movdetshow(){
    citshow();cout<<"\n";
    citsel();cout<<"\n\n";
    t.cyan();

   cout<<"Movies:\n\n";
   cout<<"1.KANTARA     ";
   cout<<"2.RAM SETU      ";
   cout<<"3.SARDAR     ";
   cout<<"4.THANK GOD       \n";
   cout<<"\n";
   cout<<"5.BLACK ADAM      ";
   cout<<"6.DRISHYAM 2      ";
   cout<<"7.ORI DEVUDA      ";
   cout<<"8.PONNIYIN SELVAN - PART 1 ";
   cout<<"\n";
   cout<<"\n";

   t.reset();
   }

   void movsel(){
    cout<<"Please select a movie : ";
    cin>>movi;
    if(movi==1){
    mov="KANTARA";
    cout<<"\n\n";
    t.green();

    cout<<"Language:\n";
    cout<<"\n";
    cout<<"1.Kannada  ";
    cout<<"2.Telugu   ";
    cout<<"3.Hindi\n\n";
    t.reset();

    cout<<"Please select your language:";
    cin>>lani;

    if(lani==1){
        lan="Kannada";
        
    }
    else if(lani==2){
        lan="Telugu";
        
    }
    else if(lani==3){
        lan="Hindi";
        
    }
    cout<<"\n\n";

    t.red();

    cout<<"Format:2D";
    cout<<"\n";

    t.reset();

    form = "2D";
    dur ="2h 30m";
    cate="UA";
    genre = "Action,Drama,Thriller";
 }
  else if(movi==2){
   mov="RAM SETU";
   cout<<"\n\n";
   
    t.green();
    cout<<"Language:\n\n";
    cout<<"1.Telugu   ";
    cout<<"2.Hindi    ";
    cout<<"3.Tamil   ";
    cout<<"\n\n";
    t.reset();

    cout<<"Please select your language:";
    cin>>lani;

    if(lani==1){
        lan="Telugu";    
    }
    else if(lani==2){
       lan="Hindi";   
    }
    else if(lani==3){
        lan="Tamil";   
    }
      t.red();
      cout<<"\n\n";
      cout<<"Format:2D";
      cout<<"\n\n";
      t.reset();

   dur="2h 22m";
   cate ="UA";
   genre="Action,Adventure,Thriller";    
} 
else if(movi==3){
    mov="SARDAR";
    cout<<"\n\n";
    t.green();

    cout<<"Language:\n\n";

    cout<<"1.Telugu   ";
    cout<<"2.Tamil  ";
    cout<<"\n\n";
    t.reset();

    cout<<"Please select your language:";
    cin>>lani;
    if(lani==1){
        lan="Telugu";   
    }
    else if(lani==2){
        lan="Tamil";   
    }

    cout<<"\n";
    t.red();
    cout<<"Format:2D";
    t.reset();
    form="2D"; 
    dur="2h 46m";
    cate="UA";
    genre="Action,Thriller";
 }
  else if(movi==4){
    mov="THANK GOD";
     cout<<"\n\n";
     t.green();
    cout<<"Language : Hindi\n";
    lan = "Hindi";
    cout<<"\n";
    t.reset();
      t.red();
      cout<<"Format:2D";
      t.reset();
    form = "2D";
    dur="2h 1m";
    cate = "UA";
    genre="Comedy,Drama,Fantasy";
 }
   else if(movi==5){
     mov="BLACK ADAM";
    cout<<"\n\n";
    t.green();
    cout<<"Language:\n\n";
    cout<<"1.Telugu  ";
    cout<<"2.Tamil   ";
    cout<<"3.Hindi   ";
    cout<<"4.English  ";
    cout<<"\n\n";
    t.reset();
    cout<<"Please select your language:";
    cin>>lani;
    if(lani==1){
        lan="Telugu";
    }
    else if(lani==2){
         lan="Tamil";  
    }
    else if(lani==3){
        lan="Hindi";   
    }
    else if(lani==4){
        lan="English";   
    }
   cout<<"\n\n";
   t.red();

   cout<<"Format:";
   cout<<"\n\n";
   cout<<"1.(2D)   ";
   cout<<"2.(MX4D)   ";
   cout<<"3.(4DX)   ";
   cout<<"4.(IMAX 2D)   ";
   cout<<"\n\n";
   t.reset();

cout<<"Please select a format:";
cin>>formi;

  if(formi==1){
   form="2D";
  }
  else if(formi==2){
   form="MX4D";
  }
  else if(formi==3){
   form="4DX";
  }
  else if(formi==4){
   form="IMAX 2D";
  }
    dur="2h 5m";
    cate="UA";
    genre="Action,Fantasy.Sci-Fi";
}
  else if(movi==6){ 

    mov="DRISHYAM 2";
    cout<<"\n\n";
    t.green();
    cout<<"Language : Hindi\n";
    lan = "Hindi";
    cout<<"\n";
    t.reset();
      t.red();
      cout<<"Format:2D";
      t.reset();
    form="2D";
    dur="2h 20m";
    cate="UA";
    genre="Drama,Mystery,Thriller";
 }
  else if(movi==7){
     mov="ORI DEVUDA";
     cout<<"\n\n";
     t.green();
     cout<<"Language:Telugu";
     cout<<"\n";
     lan="Telugu";
     t.reset();
     cout<<"\n";
     t.red();
     cout<<"Format:2D";
     t.reset();
     form="2D";
    dur="2h 27m";
    cate="UA";
    genre="Comedy,Romantic";
 }
  else if(movi==8){
    mov="PONNIYIN SELVAN - PART 1";
     cout<<"\n\n";
     t.green();
    cout<<"Language:\n\n";
    cout<<"1.Kannada  ";
    cout<<"2.Telugu   ";
    cout<<"3.Tamil    ";
    cout<<"4.Hindi    ";
    cout<<"5.Malayalam  ";
    cout<<"\n\n";
     t.reset();
    cout<<"\n";
    cout<<"Please select your language:";
    cin>>lani;
    if(lani==1){
        lan="Kannada";  
    }
    else if(lani==2){
        lan="Telugu";  
    }
    else if(lani==3){
        lan="Tamil";   
    }
    else if(lani==4){
        lan="Hindi";   
    }
    else if(lani==5){
        lan="Malayalam";    
    }

    t.red();
    cout<<"\n\n";
   cout<<"Format:";
   cout<<"\n\n";
   cout<<"1.(2D)   ";
   cout<<"2.(IMAX 2D)   ";
   cout<<"\n\n";
   t.reset();

cout<<"Please select a format:";
cin>>formi;
  if(formi==1){
   form="2D";
  }
  else if(formi==2){
   form="IMAX 2D";
  }
    dur="2h 47m";
    cate="UA";
    genre="Action,Adventure,Drama,Historical";
  }
   }
 };

 class Malls :virtual public Cities{
     private:
     public:
     int malli;string date;
     string mall;int year;
     void mallshow(){

      year = 2022;
      cout<<"Please pick and enter the date and month in the format dd/mm :";
      cin>>date;
      cout<<"\n\n";
      t.yellow();

   cout<<"Malls                       Time:\n";
   cout<<"\n";
   cout<<"1.PVR:Irrum Manzil          10:40\n";
   cout<<"2.PVR:Next Galleria Mall    10:30\n";
   cout<<"3.Carnival:TGIP Red Carpet  13:00\n";
   cout<<"4.Cinepolis: Airia Mall     15:00\n";
   cout<<"5.Cinepolis:V3s Mall        18:00\n";
   cout<<"6.Fun Cinemas: TDI Mall     19:00\n";
   cout<<"7.INOX: Nehru Place         19:30\n";
   cout<<"8.Miraj Cinemas             19:45\n";
   cout<<"9.Gold Cinema: Dadar        22:00\n";
   cout<<"10.Mukta A2 Cinemas         23:15\n";
   cout<<"\n";
    t.reset();
     }
     void mallsel(){
      cout<<"Please select a Mall :";
      cin>>malli;
      if(malli==1){
    mall="PVR:Irrum Manzil  10:40";
    }
    else if(malli==2){
    mall="PVR:Next Galleria Mall  10:30";
    }
    else if(malli==3){
    mall="Carnival:TGIP Red Carpet  13:00";
    }
    else if(malli==4){
    mall="Cinepolis: Airia Mall  15:00";
    }
    else if(malli==5){
    mall="Cinepolis:V3s Mall  18:00";
    }
    else if(malli==6){
    mall="Fun Cinemas: TDI Mall   19:00";
    }
    else if(malli==7){
    mall="INOX: Nehru Place    19:30";
    }
    else if(malli==8){
    mall="Miraj Cinemas   19:45";
    }
    else if(malli==9){
     mall="Gold Cinema: Dadar   22:00";
    }
    else if(malli==10){
     mall="Mukta A2 Cinemas  23:15";
    }
     }
 };
  class Userdetails : public Moviedetails,public Malls{
    private:
    public:
    void getdetails(){
      movdetshow();
      cout<<"\n";
      movsel();
      system("CLS");
      cout<<"\n";
      mallshow();
      cout<<"\n";
      mallsel();
      fstream f;
      f.open("info.txt",ios::app);//FILE HANDLING
      sleep(2);
      cout<<"\n";
      cout<<"Processing.........\n";

      sleep(2);
      system("CLS");
      cout<<"\n";
      cout<<"Please enter number of seats:";
      int seats;
      cin>>seats;
      int multiseats = 2*(seats);
      int seatarray[multiseats];
      cout<<"\n\n";
      int *seatp;
      seatp = &seatarray[multiseats];

     updateseats(seats,seatarray,multiseats);
     cout<<"\nProcessing.......\n";
     sleep(3);
     system("CLS");
     cout<<"\n";
  
     t.cyan();
     cout<<"You will be charged Rs.200 per ticket\n";
     t.reset();
     cout<<"\n";
     sleep(3);
     t.yellow();
     cout.width(1);//CONSOLE IO OPERATION (SET WIDTH)
     cout<<"Booking Summary";
     cout<<"\n";
     t.reset();
     t.cyan();
     cout<<"Seats : ";
    for(int i=0;i<multiseats;i+=2){
    cout<<"{ "<<seatarray[i]<<","<<seatarray[i+1]<<" }";
    }
    t.reset();
    sleep(2);
    cout<<"\n\n";
    int fee;fee=(200*seats);
    t.green();
    cout<<"Fee : Rs. "<<fee;
    cout<<"\n\n";
    int convenience;convenience=(seats*25);
    cout<<"Convenience fees: Rs. "<<convenience;cout<<"\n\n";
    int total;total=fee+convenience;
    cout<<"Amount Payable : Rs. "<<total;
    cout<<"\n\n";
    sleep(2);
    t.reset();
    cout<<"Proceeding to Payment..........\n";
    sleep(4);
    system("CLS");
    cout<<"\n\n";
    string email;
    t.blue();
    cout<<"Please enter your Email: ";
    t.reset();
    cin>>email;
    cout<<"\n";
    f<<"Email : "<<email;
    t.blue();
    string num;
    cout<<"Please enter your phone number:";
    t.reset();
    cout<<" +91 ";cin>>num;
    cout<<"\n\n";
    t.yellow();
    cout<<"Please enter your Card details:\n";
    cout<<"\n";
    t.reset();
    long long int card;
    t.blue();
    cout<<"Card Number : ";
    t.reset();
    cin>>card;
    cout<<"\n";
    string name;
    t.blue();
    cout<<"Name : ";
    t.reset();
    cin>>name;
    cout<<"\n";
    int cvv;
    t.blue();
   cout<<"CVV : ";
   t.reset();
   cin>>cvv;
   cout<<"\n";
   string expiry;
   t.blue();
   cout<<"Expiry : ";
   t.reset();
   cin>>expiry;
   cout<<"\n";
   cout<<"\n";
   cout<<"Please press enter to make payment\n";
   getch();
   cout<<"\n";
   t.green();
   cout<<"The OTP has been sent to your registered mobile number {+91 "<<num[0]<<num[1]<<num[2]<<"*****"<<num[8]<<num[9]<<" }\n";
   cout<<"\n";
   int otp;
   cout<<"Please enter the OTP : ";
   t.reset();
   cin>>otp;
   cout<<"\n\n";
   cout<<"Your amount is being processed...........\n";
   sleep(3);
   cout<<"Processing....\n";
   sleep(3);
   cout<<"Processing....\n";
   sleep(3);
   cout<<"Processing....\n";
   sleep(3);
   cout<<"\n";
   t.green();
   cout<<"*****Success*****";
   t.reset();
   sleep(3);
   system("CLS");
   cout<<"\n\n";
   cout<<"Your ticket has been booked\n";
   cout<<"Thank you for using our website\n";
   cout<<"\n";
   t.white();
   cout<<"Please wear a mask,use a sanitizer and maintain social distancing\n";
   cout<<"while entering and exiting from the theatre\n";
   t.reset();
    sleep(3);
    cout<<"\n";
    t.red();
    cout<<"Ticket Details:\n\n";
    t.reset();
    t.yellow();
    cout<<mov<<"\n\n";
    cout<<lan<<"   "<<form<<"  \n\n";
    cout<<dur<<"  "<<cate<<"  "<<genre<<"\n\n";
    cout.width(1);
    cout<<"Seats : ";
    for(int i=0;i<multiseats;i+=2){
    cout<<"{ "<<seatarray[i]<<","<<seatarray[i+1]<<" }";
    }
   cout<<"\n\n";
  cout<<date<<"/"<<year<<"\n\n";
  cout<<mall<<"\n\n";
  cout<<loc<<"\n\n";
  t.reset();
  cout<<"******$$$$$$******\n\n\n\n\n";
  //FILE
   f<<"\n";
   f<<"Number : ";
  f<<num;
  f<<"\n\n";
   f<<"Ticket Details:\n\n";

    f<<mov;
    f<<"\n";
    f<<lan;
    f<<"\t";
    f<<"\t";
    f<<form;
    f<<"\n";
    
    f<<dur;
    f<<"\t";
    f<<"\t";
    f<<cate;
    f<<"\t";
    f<<"\t";
    f<<genre;
    f<<"\n";
  
   f<<"Seats : ";
    for(int i=0;i<multiseats;i+=2){
    f<<" { ";
    f<<seatarray[i];
    f<<",";
    f<<seatarray[i+1];
    f<<" } ";
    }
  f<<"\n";
 f<<date;
 f<<"\n";
  f<<mall;
f<<"\n";
  f<<loc;
  f<<"\n";
  f<<"\n";
  f<<"******$$$$$$******\n";
  f<<"\n";
  f<<"\n";
  f.close();
    }
 }c;

void intro(int l){
  
   t.cyan();
    cout<<"                __________________________________________________________________\n";
    cout<<"               |                                                                  |\n";
    cout<<"               |                                                                  |\n";
    cout<<"               |                                                                  |\n";
    cout<<"               |                              ";t.white();cout<<"WELCOME";t.cyan();;cout<<"                             |\n";
    cout<<"               |                                                                  |\n";
    cout<<"               |                                 ";t.white();cout<<"TO";t.cyan();;cout<<"                               |\n";
    cout<<"               |                                                                  |\n";
    cout<<"               |                            ";t.white();cout<<"FILM FESTIVAL";t.cyan();cout<<"                         |\n";
    cout<<"               |                                                                  |\n";
    cout<<"               |                                                                  |\n";
    cout<<"               |                                                                  |\n";
    cout<<"               |__________________________________________________________________|\n";        
    t.reset();
}

int main(){
  sleep(1);
  intro(1);
    sleep(1);
    cout<<"\n\n";
   c.getdetails();  
}

void Colors::red() {
  cout<<"\033[1;31m";
}

void Colors::yellow() {
  cout<<"\033[1;33m";
}

void Colors::green(){
    cout<<"\033[1;32m";
}

void Colors::blue(){
    cout<<"\033[1;34m";
}

void Colors::cyan(){
    cout<<"\033[1;36m";
}

void Colors::white(){
  cout<<"\033[1;37m";
}

void Colors::reset () {
    cout<<"\033[0m";
}
void updateseats(){//FUNCTION OVERLOADING
  fstream f;

f.open("seatupdate.txt",ios::out);//FILE HANDLING

char a[10][10];

for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        a[i][j]='L';
    }
}

for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){  
          f<<" ";
          f<<a[i][j];
          f<<" ";
    }
    f<<" ";
    f<<" "<<i+1<<" ";
    f<<"\n";
}
f<<" ";
for(int i=0;i<10;i++){ 
    f<<i+1<<"  ";
}
f.close();
}
void updateseats(int seats,int seatarray[],int multiseats){//FUNCTION OVERLOADING
    fstream f;
    f.open("seatupdate.txt",ios::in);//FILE HANDLING
    char se_2;
    int count = 0;
    while(f){
        f>>se_2;
        if(se_2 == 'B'){
            count++;
        }
    }
     f.close();
     char seatupdt[10][10];
     if(count==100){
            updateseats();
      }
        f.open("seatupdate.txt",ios::in);//FILE HANDLING
        int row = 0;
        int column = 0;
        while(f){
            f>>std::noskipws>>se_2;
            if(se_2 == 'L'){
                seatupdt[column][row] = se_2;
              column++;
            if(column==10){
              row++;
              column = 0;
             }
            t.yellow();
            cout<<se_2;
            t.reset();
            }
            else if(se_2 == 'B'){
                seatupdt[column][row] = se_2;
              column++;
            if(column==10){
              row++;
              column = 0;
             }
            t.red();
            cout<<se_2;
            t.reset();
            }
            else{
                cout<<se_2;
            }
        }
         f.close();
        f.open("seatupdate.txt",ios::out);//FILE HANDLING


int b[seats][2];
cout<<"\n\nPlease enter the seats in the format of {row column} : ";
  for(int i=0;i<seats;i++){
    for(int j=0;j<2;j++){
        cin>>b[i][j];   
    }
  }
 int samp = 0;
  for(int i=0;i<multiseats && samp<seats;i+=2){
     seatarray[i]=b[samp][0];
     seatarray[i+1]=b[samp][1];
    samp++;
  }

for(int i=0;i<seats;i++){
seatupdt[b[i][1]-1][b[i][0]-1] = 'B';
}

for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
          string line = " ";
        f<<line;
        f<<(seatupdt[j][i]);
        f<<line;
    }
    f<<" ";
    f<<(i+1);
    f<<"\n";
}
for(int i=0;i<10;i++){
f<<" ";
    f<<(i+1);
     f<<" ";
}
f.close(); 
}

