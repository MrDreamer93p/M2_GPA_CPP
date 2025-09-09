#ifndef ABSTRACTCLIENT_H
#define ABSTRACTCLIENT_H

#include <string>
#include "AbstractOperation.h"

class AbstractClient {
protected:
    int arrivalTime;
    int serviceStartTime;
    int departureTime;
    AbstractOperation* operation;
    int patienceTime;

public:
    AbstractClient(int arrivalTime, AbstractOperation* operation, int patienceTime);
    virtual bool isPriority() const = 0;
    int getArrivalTime() const;
    int getDepartureTime() const;
    void setDepartureTime(int departureTime);
    int getServiceStartTime() const;
    void setServiceStartTime(int serviceStartTime);
    AbstractOperation* getOperation() const;
    void reducePatience();
    bool isPatient() const;
    virtual std::string toString() const;
};

#endif 
