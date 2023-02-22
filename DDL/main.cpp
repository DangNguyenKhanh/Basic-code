#include <iostream>
#include <windows.h>

typedef int (*AddFunc)(int, int);   // Define a function pointer type

int main() {
    HINSTANCE hDLL = LoadLibrary("module.dll");   // Load the DLL
    if (hDLL == nullptr) {
        std::cerr << "Failed to load DLL\n";
        return 1;
    }

    AddFunc add = (AddFunc) GetProcAddress(hDLL, "add");   // Get the address of the "add" function
    if (add == nullptr) {
        std::cerr << "Failed to find add function\n";
        return 1;
    }

    int result = add(10, 12);   // Call the "add" function from the DLL
    std::cout << "Result: " << result << "\n";

    FreeLibrary(hDLL);   // Release the DLL

    return 0;
}