#include <iostream>
#include <string>

struct Node {
    std::string nama;
    std::string nim;
    Node* next;
};

class Antrian {
private:
    Node* front;
    Node* rear;
    int size;

public:
    Antrian() : front(nullptr), rear(nullptr), size(0) {}

    ~Antrian() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == 5;
    }

    void enqueue(std::string nama, std::string nim) {
        if (isFull()) {
            std::cout << "Antrian Penuh" << std::endl;
            return;
        }

        Node* newNode = new Node();
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Antrian kosong" << std::endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;
        size--;

        if (isEmpty()) {
            rear = nullptr;
        }
    }

    int count() {
        return size;
    }

    void clear() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
        rear = nullptr;
        size = 0;
    }

    void view() {
        std::cout << "Data antrian mahasiswa: " << std::endl;
        Node* temp = front;
        int i = 1;
        while (temp != nullptr) {
            std::cout << i << ". Nama: " << temp->nama << ", NIM: " << temp->nim << std::endl;
            temp = temp->next;
            i++;
        }
    }
};

int main() {
    Antrian antrian;

    antrian.enqueue("Raisha", "2311110002");
    antrian.enqueue("Raisha", "2311110002");
    antrian.view();
    std::cout << "Jumlah antrian = " << antrian.count() << std::endl;
    antrian.dequeue();
    antrian.view();
    std::cout << "Jumlah antrian = " << antrian.count() << std::endl;
    antrian.clear();
    antrian.view();
    std::cout << "Jumlah antrian = " << antrian.count() << std::endl;
    return 0;
}