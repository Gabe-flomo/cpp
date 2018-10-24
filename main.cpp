#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int generateNumber();
string weaponData(int x);

const int LOW = 50;
const int MEDIUM = 85;
const int MAX = 100;

int main()
{
    //int input;
    //cout<<"How many weapons would you like to select? "<<endl;
    //cin>>input;


   int num = generateNumber();
   string weapon = weaponData(num);
   cout<<"LOW \t"<<"Medium \t"<<"High"<<endl;
   cout<<"0-50 \t"<<"51-85 \t"<<"85-100\n"<<endl;
   cout<<"You got a: "<< num <<endl;
   if(num<=LOW)
   {
       cout<<"You got a low tier weapon.    (Pistol, Assault Rifle, Shotgun, Sub-Machine Gun, LMG)"<<endl;
       cout<<"Your weapon: "<< weapon <<endl;
   }

   else if(num>LOW && num<=MEDIUM)
   {
       cout<<"You got a medium tier weapon.  (Dual pistol, Automatic Shotgun,Sniper, Burst Assault Rifle, Rapid Fire LMG)"<<endl;
       cout<<"Your weapon: "<< weapon <<endl;
   }

   else if(num>MEDIUM || num<=MAX)
   {
       cout<<"You got a High tier weapon.     (Desert Eagle, Scar, Heavy Shotgun, Heavy Sniper, My cock)"<<endl;
       cout<<"Your weapon: "<< weapon <<endl;
   }


    return 0;
}

int generateNumber(){  //generates a random number

    srand(time(0));
    int f;
     for(int x=0; x<10; x++){
    f = (rand()%100)+1; //generates a number between 1-100
     }
    return f;
}

string weaponData(int x){ // contains all data concerning weapons

    string low[5] = {"Pistol","Assault Rifle","Shotgun","Sub-Machine Gun","LMG" };
    string med[5] = {"Dual pistol","Automatic Shotgun","Sniper","Burst Assault Rifle","Rapid Fire LMG" };
    string high[5] = {"Desert Eagle","Scar","Heavy Shotgun","Heavy Sniper","My cock" };
    string y;

    srand(time(0));            // this part creates a random number //
    int num = rand()%5;        // and uses that number to randomly select a weapon //


    if(x<=LOW)
        y = low[num];
    else if(x>LOW && x<=MEDIUM)
        y = med[num];
    else if(x>MEDIUM && x<=MAX)
        y = high[num];

    return y;
}
