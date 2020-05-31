#ifndef TASK_3_H
#define TASK_3_H

#include <vector>
#include <queue>
#include <iostream>
#include <random>
#include <thread>
#include <chrono>
#include <ctime>
#include <cstdlib>
#include <mutex>

#define MAX_CUSTOMERS 5
#define CUSTOMERS_AMOUNT 20
#define MAX_GOODS 10
#define DELAY 10


class Customer {
private:
	std::vector<int> goods;
	int customerID;
public:
	Customer(int ID);

	void addGoodsToCustomer();
	std::vector<int> getGoodsOfCustomer();
	void setCustomerID(int ID);
	int getCustomerID();
};

void payingForGoods(std::queue<Customer*> customers, int threadNumber);
void startTask3();
#endif 