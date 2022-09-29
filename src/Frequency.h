// ----------------------------------------------------------------------
// <copyright file="Frequency.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#ifndef FREQUENCY_H
#define FREQUENCY_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Frequency : BaseValue
	{

	public:
		Frequency();
		Frequency(double hz);
		~Frequency();

		// SI Unit Get Functions - #Property
		UnitProp Hz = UnitProp(this, 1);
		UnitProp kHz = UnitProp(this, .001);
		UnitProp MHz = UnitProp(this, .000001);
		UnitProp GHz = UnitProp(this, .000000001);

	};
}
#endif /* FREQUENCY_H */
