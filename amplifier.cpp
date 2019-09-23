#include "amplifier.h"

namespace nwacc
{
	amplifier::amplifier(const double voltage_out,const double voltage_in):
		voltage_out_{voltage_out }, voltage_in_{ voltage_in} {}

	double amplifier::get_voltage_out()const
	{
		return this->voltage_out_;
	}

	double amplifier::get_voltage_in()const
	{
		return this->voltage_in_;
	}

}
