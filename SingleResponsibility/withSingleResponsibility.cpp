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
    virtual bool sendEmail(string email, string emailContent) = 0;
    // can be extended to other functions related to email
};

class ILogger{
public:
    // pure virtual methods
    virtual void logError(string errMsg) = 0;
    // can be extended to logInfo, logDebug, etc.
};

class Logger: public ILogger{
public:
    virtual void logError(string errMsg){
        cout << "error:" << errMsg << endl;
    }
};

class MailService: public IEmail{
private:
    Logger logger;
public:
    MailService(Logger logger1){
        logger = logger1;
    }
    virtual bool sendEmail(string email,string emailContent){
        bool emailSuccess = 1;
        try
        {
            if(email == ""){
                throw "email cannot be empty";
            }
            if(emailContent == ""){
                throw "email content cannot be empty";
            }
            cout << "Mail sent to " << email << endl;
        }
        catch(const std::exception& e)
        {
            logger.logError(e.what());
            emailSuccess = 0;
        }catch(...){
            logger.logError("error occured when sendMail() called.");
            emailSuccess = 0;
        }

        return emailSuccess;
    }
};

class User : public IUser{
private:
    Logger logger;
public:
    User(Logger logger1){
        logger = logger1;
    }
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
            cout << "success login user:" << username << endl;
        }
        catch(const std::exception& e)
        {
            logger.logError(e.what());
            loginSuccess = 0;
        }catch(...){
            logger.logError("error occured when login() called.");
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
            cout << "success register user:" << username << endl;
        }
        catch(const std::exception& e)
        {
            logger.logError(e.what());
            registerSuccess = 0;
        }catch(...){
            logger.logError("error occured when register() called.");
            registerSuccess = 0;
        }


        return registerSuccess;
    }

};



int main(){
    Logger* logger = new Logger();

    User* user = new User(*logger);
    user->registerUser("talha","123","abc@abc.com");
    user->loginUser("","123");

    MailService* mailService = new MailService(*logger);
    mailService->sendEmail("abc@abc.com", "hello my friend");
    return 0;
}