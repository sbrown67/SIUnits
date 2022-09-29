/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later
*/

#ifndef UNITPROP_H
#define UNITPROP_H

#include "BaseValue.h"

class UnitProp
{
protected:
    BaseValue* m_baseValue;
    double m_scale;

public:
    inline UnitProp(BaseValue* baseValue, double scale)
    {
        m_baseValue = baseValue;
        m_scale = scale;
    }

    inline void Set(const double& a) { m_baseValue->Value = a / m_scale; }
    inline double Get() { return m_baseValue->Value * m_scale; }
    operator double() { return Get(); }
    double& operator=(const double& a) 
    { 
        /*double val = a / m_scale;
        m_baseValue->Value = val;
        return val;*/

        double* new_val = new double;
        *new_val = a / m_scale;
        m_baseValue->Value = *new_val;
        return *new_val;
        
    }
};
#endif /* UNITPROP_H */
