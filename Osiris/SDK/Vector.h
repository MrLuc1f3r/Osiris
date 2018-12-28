#pragma once

struct Vector final {
    constexpr Vector& operator=(const float* array) noexcept
    {
        x = array[0];
        y = array[1];
        z = array[2];
        return *this;
    }

    constexpr Vector& operator-(const Vector& v) noexcept
    {
        x -= v.x;
        y -= v.y;
        z -= v.z;
        return *this;
    }

    constexpr float length2D() const noexcept
    {
        return std::sqrt(x * x + y * y);
    }

    float x, y, z;
};
