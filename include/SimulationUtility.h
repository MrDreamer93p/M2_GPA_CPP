#ifndef SIMULATIONUTILITY_H
#define SIMULATIONUTILITY_H

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Bank.h"
#include "AbstractOperation.h"
#include "Consultation.h"
#include "Transfer.h"
#include "Withdraw.h"

class SimulationUtility {
public:
    static int getRandomNumber(int min, int max);
    static void printServiceTimeTrace(int currentSystemTime, int serviceTime);
    static void printClientArrival(int currentSystemTime, bool served);
    static void printClientDeparture(int currentSystemTime);
    static void printClientDepartureWithoutBeingServed(int currentSystemTime);
    static void printBankStat(int currentSystemTime, const Bank& bank);
    static bool isPriorityClient(double priorityClientRate);
    static AbstractOperation* getRandomOperation(int serviceTime);
};

#endif
