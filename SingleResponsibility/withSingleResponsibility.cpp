#include<iostream>
#include<string>
using namespace std;

class IUser{
    public:
        // pure virtual methods
        virtual bool loginUser(string username, string pass) = 0;
        virtual bool registerUser(string username, string pass, string email) = 0;

};

class IEmail{
    public:
        // pure virtual methods
        virtual bool sendEmail(string emailContent) = 0;    
};

class ILogger{
    public:
        // pure virtual methods
        virtual void logError(string errMsg) = 0;
};

int main(){

    return 0;
}