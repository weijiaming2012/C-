#ifndef DISCOUNTSALE_H
#define DISCOUNTSALE_H

#include "sale.h"

namespace salesavitch
{
	class DiscountSale:public Sale
	{
		public:
			DiscountSale();
			DiscountSale(double thePrice,double theDiscount);
			virtual double bill() const;

		protected:
			double discount;
	};
}

#endif
