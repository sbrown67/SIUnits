/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later
*/

#ifndef UNITPROPLTF_H
#define UNITPROPLTF_H

#include "BaseValuef.h"

class UnitPropLTF
{
protected:
    BaseValuef* m_baseValue;
    float m_scale;
    float m_offset;

public:
    inline UnitPropLTF(BaseValuef* baseValue, float scale, float offset)
    {
        m_baseValue = baseValue;
        m_scale = scale;
        m_offset = offset;
    }

    inline void Set(const float& a) { m_baseValue->Value = (a - m_offset) / m_scale; }
    inline float Get() { return m_baseValue->Value * m_scale + m_offset; }
    operator float() { return Get(); }
    float& operator=(const float& a)
    { 
        //float val = (a - m_offset) / m_scale;
        //m_baseValue->Value = val;
        //return val;

        float* new_val = new float;
        *new_val = (a - m_offset) / m_scale;
        m_baseValue->Value = *new_val;
        return *new_val;
    }
};
#endif /* UNITPROPLTF_H */

