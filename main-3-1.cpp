int main() {
    const int n = 5;
    int array[n] = {1, 2, 5, 2, 1};

    if (is_fanarray(array, n)) {
        cout << "Array is fan." << endl;
    } else {
        cout << "Not a fan array." << endl;
    }

    return 0;
}