#pragma once
#include "IPaymentMethod.h"
class CashlessPaymentMethod :
	public IPaymentMethod
{
	// Inherited via IPaymentMethod
	virtual Payment* create() override;
};

