#include "CashlessPayment.h"
#include "CashPayment.h"
#include "PaymentService.h"

Payment* PaymentService::createPayment(PaymentMethod method)
{
	Payment* pPayment = nullptr;
	switch (method)
	{
	case PaymentService::PaymentMethod::Cash:
		pPayment = new CashPayment();
		break;
	case PaymentService::PaymentMethod::Cashless:
		pPayment = new CashlessPayment();
		break;
	}

	return pPayment;
}