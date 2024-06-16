#include <cmath>

class c_easing {
private:
    const float PI = 3.141f;
    const float C1 = 1.701f;
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
        return std::pow(value, 2.0f);
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
        return std::pow(value, 3.0f);
    }

    float out_cubic(float value) noexcept {
        return 1.0f - std::pow(1.0f - value, 3.0f);
    }

    float in_out_cubic(float value) noexcept {
        if (value < 0.5f) {
            return 4.0f * std::pow(value, 3.0f);
        }

        else {
            return 1.0f - std::pow(-2.0f * value + 2.0f, 3.0f) / 2.0f;
        }
    }

    float in_quart(float value) noexcept {
        return std::pow(value, 4.0f);
    }

    float out_quart(float value) noexcept {
        return 1.0f - std::pow(1.0f - value, 4.0f);
    }

    float in_out_quart(float value) noexcept {
        if (value < 0.5f) {
            return 8.0f * std::pow(value, 4.0f);
        }

        else {
            return 1.0f - std::pow(-2.0f * value + 2.0f, 4.0f) / 2.0f;
        }
    }

    float in_quint(float value) noexcept {
        return std::pow(value, 5.0f);
    }

    float out_quint(float value) noexcept {
        return 1.0f - std::pow(1.0f - value, 5.0f);
    }

    float in_out(float value) noexcept {
        if (value < 0.5f) {
            return 16 * std::pow(value, 5.0f);
        }

        else {
            return 1.0f - std::pow(-2.0f * value + 2.0f, 5.0f) / 2.0f;
        }
    }

    float in_expo(float value) noexcept {
        if (value == 0.0f) {
            return 0.0f;
        }

        else {
            return std::pow(2.0f, 10.0f * value - 10.0f);
        }
    }

    float out_expo(float value) noexcept {
        if (value == 1.0f) {
            return 1.0f;
        }

        else {
            return 1.0f - std::pow(2.0f, -10.0f * value);
        }
    }

    float in_out_expo(float value) noexcept {
        if (value == 0.0f) {
            return 0.0f;
        }

        else if (value == 1.0f) {
            return 1.0f;
        }

        else if (value < 0.5f) {
            return std::pow(2.0f, 20.0f * value - 10.0f) / 2.0f;
        }

        else {
            return (2.0f - std::pow(2.0f, -20.0f * value + 10.0f)) / 2.0f;
        }
    }

    float in_circ(float value) noexcept {
        return 1.0f - std::sqrt(1.0f - std::pow(value, 2.0f));
    }

    float out_circ(float value) noexcept {
        return std::sqrt(1.0f - std::pow(value - 1.0f, 2.0f));
    }

    float in_out_circ(float value) noexcept {
        if (value < 5.0f) {
            return (1.0f - std::sqrt(1.0f - std::pow(2.0f * value, 2.0f))) / 2.0f;
        }

        else {
            return (std::sqrt(1.0f - std::pow(-2.0f * value + 2.0f, 2.0f)) + 1.0f) / 2.0f;
        }
    }

    float in_back(float value) noexcept {
        return (C1 + 1.0f) * std::pow(value, 3.0f) - C1 * std::pow(value, 2.0f);
    }

    float out_back(float value) noexcept {
        return 1.0f + (C1 + 1.0f) * std::pow(value - 1.0f, 3.0f) + C1 * std::pow(value - 1.0f, 2.0f);
    }

    float in_out_back(float value) noexcept {
        if (value < 0.5f) {
            return (std::pow(2.0f * value, 2.0f) * (((C1 * 1.525f) + 1) * 2.0f * value - (C1 * 1.525f))) / 2.0f;
        }

        else {
            return (std::pow(2.0f * value - 2.0f, 2.0f) * (((C1 * 1.525f) + 1.0f) * (value * 2.0f - 2.0f) + (C1 * 1.525f)) + 2.0f) / 2.0f;
        }
    }
};

inline auto g_easing = new c_easing;