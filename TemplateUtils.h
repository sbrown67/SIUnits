#pragma once
#ifndef TEMPLATE_UTILS_H
#define TEMPLATE_UTILS_H

#include <algorithm>

namespace TemplateUtils {
    // Literal class type that wraps a constant expression string.
    // Uses implicit conversion to allow templates to seemingly
    // accept string literals (in double quotes).
    // See https://ctrpeach.io/posts/cpp20-string-literal-template-parameters/
    template<size_t N>
    struct StringLiteral {
        constexpr StringLiteral(const char(&str)[N]) {
            std::copy_n(str, N, value);
        }
        char value[N];
    };
};

#endif //TEMPLATE_UTILS_H

