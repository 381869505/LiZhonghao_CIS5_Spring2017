/* 
 * File:   main.cpp
 * Author: Li Zhonghao
 * Created on MArch 17 , 2017, 12:07 
 * Purpose:  CandyBar Calculation
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char sex;                    //M or F
    unsigned short ht,wt,age;    //height(in), weight(lbs), age(yrs)
    unsigned char cdyCals=230;   //Candy bar calories
    float BMR;                   //Basic Metabolic Rate (calories)
    int nCdyBrs;                 //number of candy bars we can eat
    
    //Input or initialize values Here
    cout<<"This program calculate the number of ";
    cout<<"candy bar allowed per day based upon your BMR"<<endl;
    cout<<"Type in your Sex(M/F),Wt(lbs),Ht(in),Age(yrs)"<<endl;
    cout<<"INputs are integer based"<<endl;
    cin>>sex,
    cin>>ht,
    cin>>wt,
    cin>>age;
    
    //Process/Calculations Here
    BMR=(sex=='m')?
        66 + 6.3f*wt + 12.9f*ht - 6.8f*age:
       655 + 4.3f*wt +  4.7f*ht - 4.7f*age;
    nCdyBrs=static_cast<int>(BMR/cdyCals);
    
    
    //Output Located Here
    cout<<"The number of candy bars you can eat = "<<nCdyBrs<<endl;
    
    //Exit
    return 0;
}

