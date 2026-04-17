#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>
#include <memory>
#include "Accountv4.h"

void display(const std::vector<Accountv4*> &source);
void display(const std::vector<std::unique_ptr<Accountv4>> &source);
void display(const std::vector<std::shared_ptr<Accountv4>> &source);

void deposit(std::vector<Accountv4*> &source, double amount);
void withdraw(std::vector<Accountv4*> &source, double amount);

#endif