#include<iostream>
#include<string>
using namespace std;

class IPrintTasks{
    public:
        // pure virtual methods
        virtual bool printBlackAndWhiteContent(string content) = 0;
        virtual bool printColorContent(string content) = 0;
        virtual bool printDuplexBlackAndWhiteContent(string content) = 0;
        virtual bool printDuplexColorContent(string content) = 0;
        virtual bool scanContent(string content) = 0;
        virtual bool faxContent(string content) = 0;
        virtual bool photoCopyContent(string content) = 0;
};

int main(){

    return 0;
}