#include "inverting_amplifier.h"

namespace nwacc
{
	inverting_amplifier::inverting_amplifier(
		const double inv_amp_resistance_one,
		const double inv_amp_resistance_two) :
		inv_amp_resistance_one_{inv_amp_resistance_one},
		inv_amp_resistance_two_{ inv_amp_resistance_two } {}

	
	double inverting_amplifier::get_inv_amp_resistance_one() const
	{
		return this->inv_amp_resistance_one_;
	}

	double inverting_amplifier::get_inv_amp_resistance_two() const
	{
		return this->inv_amp_resistance_two_;
	}

	double inverting_amplifier::get_gain() const
	{
		return -(this->get_inv_amp_resistance_two() / this->get_inv_amp_resistance_one());
	}

	std::string inverting_amplifier::get_description() const
	{
		std::string temp = "Inverting Amplifier: ";
		temp.append("R1= ").append(std::to_string(this->get_inv_amp_resistance_one()).append(" , ").append("R2=").append(std::to_string(this->get_inv_amp_resistance_two())));
		temp.append("  Gain: ").append(std::to_string(this->get_gain()));

		return temp;

	}

}
