#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>
#include <memory>
#include "Accountv3.h"

void display(const std::vector<Accountv3*> &source);
void display(const std::vector<std::unique_ptr<Accountv3>> &source);

void deposit(std::vector<Accountv3*> &source, double amount);
void withdraw(std::vector<Accountv3*> &source, double amount);

#endif