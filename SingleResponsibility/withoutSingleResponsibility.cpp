#include<iostream>
#include<string>
using namespace std;

class IUser{
public:
    // pure virtual methods
    virtual bool loginUser(string username, string pass) = 0;
    virtual bool registerUser(string username, string pass, string email) = 0;
    virtual bool sendEmail(string emailContent) = 0;
    virtual void logError(string errMsg) = 0;
};

class User{

public:

    virtual bool loginUser(string username, string pass) {
        bool loginSuccess = 1;
        try
        {
            if(username == ""){
                throw "username cannot be empty";
            }
            if(pass == ""){
                throw "password cannot be empty";
            }
            cout << "login user:" << username << endl;
        }
        catch(const std::exception& e)
        {
            logError(e.what());
            loginSuccess = 0;
        }catch(...){
            logError("error occured when login() called.");
            loginSuccess = 0;
        }


        return loginSuccess;
    }
    virtual bool registerUser(string username, string pass, string email) {
        bool registerSuccess = 1;
        try
        {
            if(username == ""){
                throw "username cannot be empty";
            }
            if(pass == ""){
                throw "password cannot be empty";
            }
            if(email == ""){
                throw "email cannot be empty";
            }
            cout << "register user:" << username << endl;
        }
        catch(const std::exception& e)
        {
            logError(e.what());
            registerSuccess = 0;
        }catch(...){
            logError("error occured when register() called.");
            registerSuccess = 0;
        }


        return registerSuccess;
    }
    virtual bool sendEmail(string emailContent){
        bool emailSuccess = 1;
        try
        {
            if(emailContent == ""){
                throw "email content cannot be empty";
            }
            cout << "send  email" << endl;
        }
        catch(const std::exception& e)
        {
            logError(e.what());
            emailSuccess = 0;
        }catch(...){
            logError("error occured when sendMail() called.");
            emailSuccess = 0;
        }

        return emailSuccess;
    }
    virtual void logError(string errMsg){
        cout << "error:" << errMsg << endl;
    }
};

int main(){
    User *user = new User();
    user->registerUser("talha","123","abc@abc.com");
    user->loginUser("","123");
    user->sendEmail("hello");
    return 0;
}