#include <cmath>

class c_easing {
private:
    float PI = 3.14;

public:
    float in_sine(float value) noexcept {
        return 1.0f - std::cos((value * PI) / 2.0f);
    }

    float out_sine(float value) noexcept {
        return std::sin((value * PI) / 2.0f);
    }

    float in_out_sine(float value) noexcept {
        return -(std::cos(PI * value) - 1.0f) / 2.0f;
    }

    float in_quad(float value) noexcept {
        return std::pow(value, 2);
    }

    float out_quad(float value) noexcept {
        return 1.0f - (1.0f - value) * (1.0f - value);
    }

    float in_out_quad(float value) noexcept {
        if (value < 0.5f) {
            return 2.0f * value * value;
        }

        else {
            return 1.0f - std::pow(-2.0f * value + 2.0f, 2.0f) / 2.0f;
        }
    }

    float in_cubic(float value) noexcept {
        return std::pow(value, 3);
    }

    float out_cubic(float value) noexcept {
        return 1.0f - std::pow(1.0f - value, 3);
    }

    float in_out_cubic(float value) noexcept {
        if (value < 0.5f) {
            return 4.0f * std::pow(value, 3);
        }

        else {
            return 1.0f - std::pow(-2.0f * value + 2.0f, 3) / 2.0f;
        }
    }

    float in_quart(float value) noexcept {
        return std::pow(value, 4);
    }

    float out_quart(float value) noexcept {
        return 1.0f - std::pow(1.0f - value, 4);
    }

    float in_out_quart(float value) noexcept {
        if (value < 0.5f) {
            return 8.0f * std::pow(value, 4);
        }

        else {
            return 1.0f - std::pow(-2.0f * value + 2.0f, 4) / 2.0f;
        }
    }
};

inline auto g_easing = new c_easing;