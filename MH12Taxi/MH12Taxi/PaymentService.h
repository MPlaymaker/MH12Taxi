#pragma once

class Payment;

class PaymentService
{
public:


	enum class PaymentMethod { Cash, Cashless };

	Payment* createPayment(PaymentMethod method);
	virtual ~PaymentService() = default;
};

