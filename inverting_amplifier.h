#pragma once
#include "amplifier.h"

#include<iostream>
namespace nwacc
{
	class inverting_amplifier :
		public amplifier
	{
	public:

		inverting_amplifier(
			const double inv_amp_resistance_one = 1.0,
			const double inv_amp_resistance_two = 1.0);

		double get_inv_amp_resistance_one()const;
		
		double get_inv_amp_resistance_two() const;

		double get_gain()const override;

		std::string get_description()const override;

	private:
		double inv_amp_resistance_one_{};

		double inv_amp_resistance_two_{};

	};



}

