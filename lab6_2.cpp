//Dialog of the first example is given below.
#include<iostream>
using namespace std;
main(){
    string name,movie,when,quote;
    int ID;
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
    cout<<"?????: ";
    getline(cin,name);
    cout<<"Fahsai: Wow!!! "<<name<<" that is a really cool name."<<endl<<"Fahsai: I think you are Engineering student. What is your student ID?"<<endl;
    cout<<name<<": ";
    cin>>ID;
    cin.ignore();
    cout<<"Fahsai: I think you may be GEAR "<<int((ID/10000000))-12<<" I have a free movie tickets for you."<<endl;
    cout<<"Fahsai: Let's go to cinema together!!!"<<endl<<"Fahsai: What movie do you want to watch?"<<endl;
    cout<<name<<": ";
    getline(cin,movie);
    cout<<"Fahsai: So....which day are you free to go with me?"<<endl;
    cout<<name<<": ";
    getline(cin,when);
    cout<<"Fahsai: "<<when<<"....that is OK!!! I'm looking forward to watch "<<movie<<" with you."<<endl;
    cout<<name<<": ";
    getline(cin,quote);
    cout<<"Fahsai: 555+ see you "<<when<<". Bye Bye \\(^ ^)/";





}

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker that is a really cool name.
Fahsai: I think you are Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47.  I have a free movie tickets for you. 
Fahsai: Let's go to cinema together!!! 
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watch Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/ 
*/
