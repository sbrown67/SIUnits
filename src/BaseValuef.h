/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later
*/

#ifndef BASEVALUEF_H
#define BASEVALUEF_H

class BaseValuef
{
protected:
    float _value = 0.0;

public:
    __declspec(property(put = property__set_Value, get = property__get_Value)) float Value;
    typedef float property__tmp_type_Value;

    property__tmp_type_Value property__get_Value()
    {
        return _value;
    }

    void property__set_Value(const property__tmp_type_Value& value)
    {
        _value = value;
    }
};
#endif /* BASEVALUEF_H */

