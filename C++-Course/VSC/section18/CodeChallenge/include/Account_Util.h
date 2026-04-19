#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>
#include <memory>
#include "Accountv6.h"

void display(const std::vector<Accountv6*> &source);
void display(const std::vector<std::unique_ptr<Accountv6>> &source);
void display(const std::vector<std::shared_ptr<Accountv6>> &source);

void deposit(std::vector<Accountv6*> &source, double amount);
void withdraw(std::vector<Accountv6*> &source, double amount);

#endif