class MyHashSet {
private:
    static const int SIZE = 1009;
    vector<vector<int>> table;

    int hash(int key) {
        return key % SIZE;
    }

public:
    MyHashSet() {
        table.resize(SIZE);
    }

    void add(int key) {
        int index = hash(key);

        for (int num : table[index]) {
            if (num == key)
                return;
        }

        table[index].push_back(key);
    }

    void remove(int key) {
        int index = hash(key);

        auto &bucket = table[index];

        for (auto it = bucket.begin(); it != bucket.end(); it++) {
            if (*it == key) {
                bucket.erase(it);
                return;
            }
        }
    }

    bool contains(int key) {
        int index = hash(key);

        for (int num : table[index]) {
            if (num == key)
                return true;
        }

        return false;
    }
};