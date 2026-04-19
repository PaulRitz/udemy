#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>
#include <memory>
#include "Accountv5.h"

void display(const std::vector<Accountv5*> &source);
void display(const std::vector<std::unique_ptr<Accountv5>> &source);
void display(const std::vector<std::shared_ptr<Accountv5>> &source);

void deposit(std::vector<Accountv5*> &source, double amount);
void withdraw(std::vector<Accountv5*> &source, double amount);

#endif