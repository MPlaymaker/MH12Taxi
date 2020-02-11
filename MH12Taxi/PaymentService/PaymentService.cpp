#include "IPaymentMethod.h"
#include "PaymentService.h"

Payment* PaymentService::createPayment(IPaymentMethod* method)
{
	return method->create();
}
