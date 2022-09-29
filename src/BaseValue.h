//#pragma once
#ifndef BASEVALUE_H
#define BASEVALUE_H

class BaseValue
{
protected:
	double _value = 0.0;

public:
    __declspec(property(put = property__set_Value, get = property__get_Value)) double Value;
    typedef double property__tmp_type_Value;

    property__tmp_type_Value property__get_Value()
    {
        return _value;
    }

    void property__set_Value(const property__tmp_type_Value& value)
    {
        _value = value;
    }
};
#endif /* BASEVALUE_H */


