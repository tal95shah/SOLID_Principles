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
        cout << this->user << " made payment of $" << amountInUSD << " using Stripe" << endl;
    }
};
class Store{
private:
    Stripe* stripeObj;
public:
    Store(string user){
        this->stripeObj = new Stripe(user);
    }
    void purchaseChocolate(double quantity){
        this->stripeObj->makePayment(100 * quantity);
    }
    void purchaseMicrowave(double quantity){
        this->stripeObj->makePayment(20000 * quantity);
    }
};



int main(){
    try
    {
        Store* store = new Store("Yasir Abbas");
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