export module hazel;

import std;

export namespace hazel
{
    __declspec(dllexport) void print()
    {
        std::print("Welcome to hazel Engine!");
    };
}
