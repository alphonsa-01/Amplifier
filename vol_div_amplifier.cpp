#include "vol_div_amplifier.h"

namespace nwacc
{
	vol_div_amplifier::vol_div_amplifier(const double vol_div_resistance_one,
							 const double vol_div_resistance_two):
						vol_div_resistance_one_{vol_div_resistance_one},
						vol_div_resistance_two_{ vol_div_resistance_two } {}

	double vol_div_amplifier::get_vol_div_resistance_one() const
	{
		return this->vol_div_resistance_one_;
	}

	double vol_div_amplifier::get_vol_div_resistance_two() const
	{
		return this->vol_div_resistance_two_;
	}

	double vol_div_amplifier::get_gain() const
	{
		return this->get_vol_div_resistance_two() / (this->get_vol_div_resistance_one() + this->get_vol_div_resistance_two());
	}

	std::string vol_div_amplifier::get_description() const
	{

		std::string temp = "Voltage Divider and Voltage Follower: ";
		temp.append("R1= ").append(std::to_string(this->get_vol_div_resistance_one()).append(" , ").append("R2=").append(std::to_string(this->get_vol_div_resistance_two())));
		temp.append("  Gain: ").append(std::to_string(this->get_gain()));

		return temp;
	}
}