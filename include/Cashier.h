#ifndef CASHIER_H
#define CASHIER_H

#include <string>
#include "AbstractClient.h"

class Cashier {
private:
    AbstractClient* currentClient;
    int serviceTimeLeft;

public:
    Cashier();
    bool isFree() const;
    void assignClient(AbstractClient* client);
    void releaseClient();
    AbstractClient* getCurrentClient() const;
    void serveOneTick();
    bool isServiceFinished() const;
    std::string toString() const;
};

#endif
