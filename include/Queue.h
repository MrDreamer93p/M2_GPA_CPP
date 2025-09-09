#ifndef QUEUE_H
#define QUEUE_H

#include <deque>
#include <vector>
#include <string>
#include "AbstractClient.h"

class Queue {
private:
    std::deque<AbstractClient*> line_;

public:
    bool isEmpty() const;
    void addQueueLast(AbstractClient* client);
    AbstractClient* getQueueFirst();
    AbstractClient* findPriorityClient() const;
    void removePriorityClient(AbstractClient* client);
    void updateClientPatience();
    std::vector<AbstractClient*> removeImpatientClients();
    std::string toString() const;
};

#endif
