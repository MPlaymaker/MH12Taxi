#pragma once
class Payment
{
public:
	virtual bool pay(float amount) = 0;
	virtual ~Payment() = default;
};

