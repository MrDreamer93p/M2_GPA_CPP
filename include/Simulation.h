#ifndef SIMULATION_H
#define SIMULATION_H

#include <string>
#include "Bank.h"
#include "StatisticManager.h"
#include "SimulationEntry.h"
#include "SimulationUtility.h"
#include "VIPClient.h"
#include "Client.h"

class Simulation {
private:
    Bank bank;
    StatisticManager statisticManager;
    SimulationEntry simulationEntry;
    void updateBank(int currentSystemTime);
    void serveClient(int currentSystemTime, Cashier& cashier, AbstractClient& client);
    int generateRandomServiceTime() const;
    bool newClientArrival(int clientArrivalInterval, int simIter) const;

public:
    Simulation(const SimulationEntry& entry);
    void simulate();
    std::string simulationResults() const;

    int getClientsServed() const;
    int getClientsUnserved() const;
    double getAverageWaitTime() const;
    double getSatisfactionRate() const;
};

#endif
