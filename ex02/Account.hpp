// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include <vector>
#include <iostream>
#include <ctime>
// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void ); // return nb of account
	static int	getTotalAmount( void ); // return tota value of money
	static int	getNbDeposits( void ); // return value of account deposists
	static int	getNbWithdrawals( void ); // return value of withdrawals
	static void	displayAccountsInfos( void ); // print nb of account, total amount, total nb of deposit and total nb of withdrawals

	Account( int initial_deposit ); // construct account with money
	~Account( void );

	void	makeDeposit( int deposit ); // make deposit in account for x money, print index, amount before deposit, value of deposit, amount in acc after deposit and nb of deposit
	bool	makeWithdrawal( int withdrawal ); // withdraws x money from account; print index, amount before withdrawals, value of withdrawals, amount after withdrawals and nb of withdrawals return true or false
	int		checkAmount( void ) const; // return amount of money for account
	void	displayStatus( void ) const; // print index, amount, nb of deposits, nb of withdrawals


private:

	static int	_nbAccounts; // total nb of account
	static int	_totalAmount; // total amounts in all account
	static int	_totalNbDeposits; // total nb of deposits
	static int	_totalNbWithdrawals; // total nb of withdrawals

	static void	_displayTimestamp( void );

	int				_accountIndex; // index de l'account
	int				_amount; // money in account
	int				_nbDeposits; // nb of deposits
	int				_nbWithdrawals; // nb of withdrawals

	Account( void );

};


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
