#ifndef STATISTICMANAGER_H
#define STATISTICMANAGER_H

#include <vector>
#include "AbstractClient.h"

class StatisticManager {
private:
    std::vector<AbstractClient*> servedClients;
    std::vector<AbstractClient*> nonServedClients;
    int simulationDuration = 0;
    int occupiedCashier = 0;

public:
    void registerServedClient(AbstractClient* client);
    void registerNonServedClient(AbstractClient* client);
    void simulationDurationRecord();
    void cashierOccupationRecord();
    double calculateAverageCashierOccupationRate(int cashierCount) const;
    double calculateAverageClientWaitingTime() const;
    double calculateAverageClientServiceTime() const;
    int servedClientCount() const;
    int nonServedClientCount() const;
    double calculateClientSatisfactionRate() const;
};

#endif
