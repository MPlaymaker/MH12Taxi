#pragma once
#include "Payment.h"
class CashlessPayment :
	public Payment
{
	// Inherited via Payment
	virtual bool pay(float amount) override;
};

