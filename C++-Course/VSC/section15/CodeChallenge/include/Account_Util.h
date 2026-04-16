#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>
#include "Accountv1.h"
#include "Savings_Accountv1.h"
#include "Trust_Accountv1.h"
#include "Checking_Accountv1.h"

void display(const std::vector<Accountv1> &source);
void deposit(std::vector<Accountv1> &source, double amount);
void withdraw(std::vector<Accountv1> &source, double amount);

void display(const std::vector<Savings_Accountv1> &source);
void deposit(std::vector<Savings_Accountv1> &source, double amount);
void withdraw(std::vector<Savings_Accountv1> &source, double amount);

void display(const std::vector<Trust_Accountv1> &source);
void deposit(std::vector<Trust_Accountv1> &source, double amount);
void withdraw(std::vector<Trust_Accountv1> &source, double amount);

void display(const std::vector<Checking_Accountv1> &source);
void deposit(std::vector<Checking_Accountv1> &source, double amount);
void withdraw(std::vector<Checking_Accountv1> &source, double amount);

#endif