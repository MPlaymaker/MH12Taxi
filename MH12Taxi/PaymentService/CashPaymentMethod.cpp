#include "CashPaymentMethod.h"
#include "CashPayment.h"

Payment* CashPaymentMethod::create()
{
	return new CashPayment();
}
