export module hazel;

import <print>;

namespace hazel
{
    export __declspec(dllexport) void print()
    {
        std::print("Welcome to Hazel Engine!");
    };
}
