#ifndef VIPCLIENT_H
#define VIPCLIENT_H

#include "AbstractClient.h"

class VIPClient : public AbstractClient {
public:
    VIPClient(int arrivalTime, AbstractOperation* operation, int patienceTime);
    bool isPriority() const override;
    std::string toString() const override;
};

#endif
