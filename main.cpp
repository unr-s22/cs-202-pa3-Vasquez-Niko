#include <iostream>
#include <string>
#include <vector>

//overriding = inheritence, overloading is function with same name different behavior (ad hoc polymorphism)
int main(){

class Money{


/*
bool operator<(const Money &rhs) const {
    return all_cents < rhs.all_cents;
}
*/

/*
friend std::ostream &operator<<(std::ostream &os, const Money &money){
    os << "$" << money.all_cents * 0.01;
    return os;
}
*/
};
// this will not work unless unless you get the + operator working for the Money object because it relies on it
// cant put a zero in this function (start it with a blank?)
/*
    Money m;
    auto sum_deposits = std::accumulate(deposits.begin(),deposits.end(),m);
*/

class Account{
    void makeDeposit(int money){

    }
    void makeWithdrawls(int money){

    }


    //store each deposit into this vector
    //std::vector<Money>;

    //need to indicate when the balance needs to be updated (Boolean flag)
    /*if flag = true{
        recalculate
    }else{
        return balance
    }*/
};
//size_t

return 0;
}