#ifndef AMPLIFIER_H_
#define AMPLIFIER_H_

#include<string>
namespace nwacc
{
	class amplifier
	{
	public:
		amplifier(const double voltage_out = 1.0,
			const double voltage_in = 1.0);

		double get_voltage_out()const;

		double get_voltage_in()const;

		virtual double get_gain()const = 0;

		virtual std::string get_description() const=0;

	private:

		double voltage_out_{};

		double voltage_in_{};

	};

}
#endif

