#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>
#include "Accountv2.h"
#include "Savings_Accountv2.h"
#include "Trust_Accountv2.h"
#include "Checking_Accountv2.h"

void display(const std::vector<Accountv2*> &source);
void deposit(std::vector<Accountv2*> &source, double amount);
void withdraw(std::vector<Accountv2*> &source, double amount);

#endif