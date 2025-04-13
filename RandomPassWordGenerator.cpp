#include <iostream>
#include <string>
using namespace std;

string Random(int len,string all){
    string password="";
    // string characters = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890";
    // int charlen = characters.size();
    int charlen = all.size();
    for(int i=0;i<len;i++){
        int randNum = rand();
        
        int currind = randNum % charlen;
        
        password += all[currind];
    }
    return password;
}

int main() {
    int length;
    string name,num,spe;
    cout<<"Enter Length of the PassWord :: "<<endl;
    cin>>length;
    cout<<"Enter Your Name :: "<<endl;
    cin>>name;
    cout<<"Enter Your Number :: "<<endl;
    cin>>num;
    cout<<"Enter Some Special Characters :: "<<endl;
    cin>>spe;
    string all = name+num+spe;
    string RandomPassword = Random(length,all);
    cout<<"Random PassWord :: "<<RandomPassword;
    return 0;
}
