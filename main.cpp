#include <iostream>
#include<vector>

#include "amplifier.h"
#include "inverting_amplifier.h"
#include "non_inverting_amplifier.h"
#include "vol_div_amplifier.h"

int main()
{
		auto r1 = 4.0;
		auto r2 = 20.0;
		std::vector<nwacc::amplifier*> amplifiers;
		amplifiers.push_back(new nwacc::inverting_amplifier(r1,r2));
		amplifiers.push_back(new nwacc::non_inverting_amplifier(r1, r2));
		amplifiers.push_back(new nwacc::vol_div_amplifier(r1, r2));

		for (auto& amplifier : amplifiers)
		{
			std::cout << amplifier->get_description() << std::endl;
		}
		
	return 0;
}