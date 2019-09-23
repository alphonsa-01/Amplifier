#include "non_inverting_amplifier.h"

namespace nwacc
{
	non_inverting_amplifier::non_inverting_amplifier(const double non_inv_amp_resistance_one,
		const double non_inv_amp_resistance_two):
		non_inv_amp_resistance_one_{non_inv_amp_resistance_one},
		non_inv_amp_resistance_two_{ non_inv_amp_resistance_two } {}

	double non_inverting_amplifier::get_non_inv_amp_resistance_one() const
	{
		return this->non_inv_amp_resistance_one_;
	}

	double non_inverting_amplifier::get_non_inv_amp_resistance_two() const
	{
		return this->non_inv_amp_resistance_two_;
	}

	double non_inverting_amplifier::get_gain() const
	{
		return 1 + (this->get_non_inv_amp_resistance_two() / this->get_non_inv_amp_resistance_one());
	}

	std::string non_inverting_amplifier::get_description()const
	{
		std::string temp = "NonInverting Amplifier: ";
		temp.append("R1= ").append(std::to_string(this->get_non_inv_amp_resistance_one()).append(" , ").append("R2=").append(std::to_string(this->get_non_inv_amp_resistance_two())));
		temp.append("  Gain: ").append(std::to_string(this->get_gain()));

		return temp;

	}

}
