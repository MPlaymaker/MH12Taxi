#pragma once
#include "Payment.h"
class CashPayment :
	public Payment
{
	// Inherited via Payment
	virtual bool pay(float amount) override;
};

