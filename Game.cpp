#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Thiết lập hạt giống ngẫu nhiên
    srand(time(0));

    // Tạo số ngẫu nhiên từ 1 đến 100
    int randomNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;
    bool isCorrect = false;

    std::cout << "Chào mừng bạn đến với trò chơi đoán số!\n";
    std::cout << "Hãy đoán một số từ 1 đến 100.\n";

    while (!isCorrect) {
        std::cout << "Đoán số: ";
        std::cin >> guess;

        attempts++;

        if (guess == randomNumber) {
            std::cout << "Chính xác! Bạn đã đoán đúng số sau " << attempts << " lần đoán.\n";
            isCorrect = true;
        } else if (guess < randomNumber) {
            std::cout << "Số bạn đoán nhỏ hơn số cần tìm. Hãy thử lại.\n";
        } else {
            std::cout << "Số bạn đoán lớn hơn số cần tìm. Hãy thử lại.\n";
        }
    }

    return 0;
}