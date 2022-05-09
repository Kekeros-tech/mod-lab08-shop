// Copyright 2022 UNN-IASR
#include "task.h"
#include <iostream>

int main()
{
    int applicationFlow = 100;
    int serviceFlow = 20;
    int maxPrice = 40;
    int maxBayers = 100;
    int queueLen = 3;
    int averageNumberOfItems = 5;
    int goodsService = (int)(applicationFlow / averageNumberOfItems);
    int buyerIntensity = serviceFlow;
    int numberOfCashDesks = 2;
    Market* market = new Market(maxPrice, maxBayers, queueLen, averageNumberOfItems,
        goodsService, buyerIntensity, numberOfCashDesks);
    market->run();
    std::cout << market->getStatistics().numberOfFailed << std::endl;
    std::cout << market->getStatistics().numberOfProcessed << std::endl;
    std::cout << market->getStatistics().numberOfRequests << std::endl;
    std::cout << market->getAverageQueueLength() << std::endl;
    std::cout << market->getAverageTimeOfWaiting() << std::endl;
    std::cout << market->getAverageCheckoutTime() << std::endl;
    std::cout << market->getAverageRestTime() << std::endl;
}
