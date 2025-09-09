

#ifndef BANK_H
#define BANK_H

#include <list>
#include <string>

#include "Cashier.h"
#include "Queue.h"

class Bank{
    public:
        Bank(int cashierCount);
        std::list<Cashier>& getCashiers();
        Queue& getQueue();
        Cashier* findFreeCashier();
        std::string toString()const;

    private:
        std::list<Cashier> cashierList;
        Queue waitingQueue;

};

#endif