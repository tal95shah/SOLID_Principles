#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Stripe{
private:
    string user;
public:
    Stripe(string user){
        this->user = user;
    }
    void makePayment(double amountInUSD){
        cout << this->user << " made payment of $" << amountInUSD << endl;
    }
};

class PaymentProcessor{
private:
    Stripe* stripeObj;
    string user;
public:
    PaymentProcessor(string user){
        this->user = user;
        stripeObj = new Stripe(user);
    }
    void pay(double amountInUSD){
        //processing fee $50 specific to stripe
        stripeObj->makePayment(50 * amountInUSD);
    }
};


class Store{
private:
    PaymentProcessor* paymentProcessor;
public:
    Store(PaymentProcessor* paymentProcessor){
        this->paymentProcessor = paymentProcessor;
    }
    void purchaseChocolate(double quantity){
        this->paymentProcessor->pay(100 * quantity);
    }
    void purchaseMicrowave(double quantity){
        this->paymentProcessor->pay(20000 * quantity);
    }
};




int main(){
    try
    {
        PaymentProcessor* paymentProcessor = new PaymentProcessor("Yasir Abbas");
        Store* store = new Store(paymentProcessor);
        store->purchaseChocolate(5);
        store->purchaseMicrowave(2);
    }
    catch(const std::exception& e)
    {
        std::cerr << endl << "EXCEPTION:" << e.what() << '\n';
    }catch(...){
        std::cerr << "Something went wrong." << '\n';
    }

    return 0;
}