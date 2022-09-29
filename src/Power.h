// ----------------------------------------------------------------------
// <copyright file="Power.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
*/

#ifndef POWER_H
#define POWER_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Power : BaseValue
	{

	public:
		Power();
		Power(double horsePower);
		~Power();

		// SI Unit Get Functions - #Property
		UnitProp HorsePower = UnitProp(this, 1);
		UnitProp Watts = UnitProp(this, 745.7);
		UnitProp ft_lbsPerSec = UnitProp(this, 550.0);
		UnitProp m_kgPerSec = UnitProp(this, 75.0);

	};
}
#endif /* POWER_H */
