#pragma once
#include "IPaymentService.h"
class PaymentService :
	public IPaymentService
{
	// Inherited via IPaymentService
	virtual Payment* createPayment(IPaymentMethod* method) override;
};

