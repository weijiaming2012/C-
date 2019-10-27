#ifndef SALE_H
#define SALE_H

#include<iostream>
using namespace std;

namespace salesavitch
{
	class Sale
	{
		protected:
			double price;

		public:
			Sale();
			Sale(double thePrice);
			virtual double bill() const;
			double savings(const Sale& other) const;
	};

	bool operator<(const Sale& first,const Sale& second);
};

#endif
