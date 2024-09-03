export module hazel;

import <print>;

export namespace hazel
{
    __declspec(dllexport) void print()
    {
        std::print("Welcome to Hazel Engine!");
    };
}
