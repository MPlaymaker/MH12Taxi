#include "CashlessPaymentMethod.h"
#include "CashlessPayment.h"

Payment* CashlessPaymentMethod::create()
{
	return new CashlessPayment();
}
