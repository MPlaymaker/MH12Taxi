#include "PaymentService.h"
#include "CashlessPaymentMethod.h"
#include "Payment.h"

int main()
{
	IPaymentService* service = new PaymentService();
	Payment* payment = service->createPayment(new CashlessPaymentMethod());
	payment->pay(1000);
	
	return 0;
}