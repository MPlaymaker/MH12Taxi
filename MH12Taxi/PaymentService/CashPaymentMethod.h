#pragma once
#include "IPaymentMethod.h"
class CashPaymentMethod :
	public IPaymentMethod
{
	// Inherited via IPaymentMethod
	virtual Payment* create() override;
};

