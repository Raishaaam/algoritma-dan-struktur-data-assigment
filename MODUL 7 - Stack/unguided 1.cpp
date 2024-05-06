#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& sentence) {
    std::stack<char> charStack;
    std::string str = sentence;

    // Hapus spasi dan ubah semua huruf menjadi huruf kecil
    str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Simpan karakter-karakter ke stack
    for (char c : str) {
        charStack.push(c);
    }

    // Bandingkan karakter-karakter di stack dengan karakter-karakter asli
    while (!charStack.empty()) {
        if (charStack.top() != str.back()) {
            return false;
        }
        charStack.pop();
        str.pop_back();
    }

    return true;
}

int main() {
    std::string kalimat;
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, kalimat);

    // Cek apakah kalimat adalah palindrom
if (isPalindrome(kalimat)) {
    std::cout << "Kalimat tersebut adalah palindrom" << std::endl;
} else {
    std::cout << "Kalimat tersebut bukan palindrom" << std::endl;
}
return 0;
}