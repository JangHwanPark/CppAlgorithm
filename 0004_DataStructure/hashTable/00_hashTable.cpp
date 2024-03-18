// C++에서 unordered_map 이 해시 테이블 구현을 제공
#include <bits/stdc++.h>
using namespace std;

/**
 * 기본 해시 테이블 구현 예제.
 * 이 예제에서는 해싱 함수로 간단한 모듈로 연산을 사용하고,
 * 충돌 처리 방법으로 체이닝을 사용합니다.
 */
class HashTable {
private:
    // 해시 테이블의 '버킷' 크기를 정의합니다.
    static const int HASH_GROUPS = 10;
    list<pair<int, std::string>> table[HASH_GROUPS];

public:
    /**
     * 주어진 키에 대한 해시 값을 계산하여 반환합니다.
     * @param key 해시 값을 계산할 정수 키
     * @return 계산된 해시 값
     */
    int hashFunction(int key) {
        return key % HASH_GROUPS;
    }

    /**
     * 해시 테이블에 키-값 쌍을 삽입합니다.
     * @param key 삽입할 키
     * @param value 삽입할 값
     */
    void insertItem(int key, std::string value) {
        int hashValue = hashFunction(key);
        auto& cell = table[hashValue];
        auto bItr = begin(cell);
        bool keyExists = false;
        for (; bItr != end(cell); bItr++) {
            if (bItr->first == key) {
                keyExists = true;
                bItr->second = value;
                std::cout << "[WARNING] Key exists. Value replaced." << std::endl;
                break;
            }
        }

        if (!keyExists) {
            cell.emplace_back(key, value);
        }
    }

    /**
     * 주어진 키에 해당하는 값을 검색하여 반환합니다.
     * @param key 검색할 키
     * @return 키에 해당하는 값. 키가 존재하지 않는 경우 빈 문자열 반환.
     */
    std::string searchItem(int key) {
        int hashValue = hashFunction(key);
        auto& cell = table[hashValue];
        auto bItr = begin(cell);
        for (; bItr != end(cell); bItr++) {
            if (bItr->first == key) {
                return bItr->second;
            }
        }
        return "";
    }

    /**
     * 주어진 키에 해당하는 항목을 해시 테이블에서 삭제합니다.
     * @param key 삭제할 키
     */
    void removeItem(int key) {
        int hashValue = hashFunction(key);
        auto& cell = table[hashValue];
        auto bItr = begin(cell);
        bool keyExists = false;
        for (; bItr != end(cell); bItr++) {
            if (bItr->first == key) {
                keyExists = true;
                bItr = cell.erase(bItr);
                cout << "[INFO] Item removed." << "\n";
                break;
            }
        }

        if (!keyExists) {
            cout << "[WARNING] Key not found. Pair not removed." << "\n";
        }
    }
};

int main() {
    HashTable ht;
    ht.insertItem(1, "One");
    ht.insertItem(2, "Two");
    ht.insertItem(3, "Three");
    cout << "The value for key 2 is " << ht.searchItem(2) << "\n";
    ht.removeItem(2);
    return 0;
}
