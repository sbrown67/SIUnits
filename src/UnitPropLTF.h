#pragma once
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
        float val = (a - m_offset) / m_scale;
        m_baseValue->Value = val;
        return val;
    }
};