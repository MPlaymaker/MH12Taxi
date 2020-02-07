#pragma once
class Payment;


enum class PaymentMethod { Cash, Cashless };

class IPaymentService
{
	virtual Payment* createPayment() = 0;
	virtual ~IPaymentService() = default;
};

