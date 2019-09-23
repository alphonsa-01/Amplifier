#pragma once
#include "amplifier.h"

namespace nwacc
{
	class non_inverting_amplifier :
		public amplifier
	{
	public:
		non_inverting_amplifier(const double non_inv_amp_resistance_one = 1.0,
			const double non_inv_amp_resistance_two = 1.0);

		double get_non_inv_amp_resistance_one() const;

		double get_non_inv_amp_resistance_two() const;

		double get_gain() const override;

		std::string get_description() const override;

	private:
		double non_inv_amp_resistance_one_{};

		double non_inv_amp_resistance_two_{};
	};

}


