#pragma once

class Payment;

class IPaymentMethod
{
public:
	virtual Payment* create() = 0;
	virtual ~IPaymentMethod() = default;
};

