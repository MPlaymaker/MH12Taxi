#pragma once
class Payment;
class IPaymentMethod;


class IPaymentService
{
public:
	virtual Payment* createPayment(IPaymentMethod* method) = 0;
	virtual ~IPaymentService() = default;
};

