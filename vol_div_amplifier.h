#pragma once
#include "amplifier.h"

namespace nwacc
{
	class vol_div_amplifier :
		public amplifier
	{
	public:
		vol_div_amplifier(const double vol_div_resistance_one = 1.0, 
			const double vol_div_resistance_two = 1.0);

		double get_vol_div_resistance_one()const;

		double get_vol_div_resistance_two()const;

		double get_gain() const override;

		std::string get_description() const override;

	private:
		double vol_div_resistance_one_{};

		double vol_div_resistance_two_{};
	};


}

