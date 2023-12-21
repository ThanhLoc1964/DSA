#include <iostream>
#include <vector>

using namespace std;

void removeAdjacentDuplicates(vector<int>& arr) {
    int n = arr.size();
    
    // Nếu mảng có ít hơn 2 phần tử, không cần xử lý
    if (n < 2) {
        return;
    }

    // Duyệt từ phần tử thứ 2 đến cuối mảng
    for (int i = 1; i < n; ++i) {
        // Nếu phần tử hiện tại giống phần tử liền trước
        if (arr[i] == arr[i - 1]) {
            // Loại bỏ phần tử hiện tại
            arr.erase(arr.begin() + i);
            // Giảm chỉ số để kiểm tra lại phần tử mới được đưa lên vị trí i
            --i;
            // Giảm kích thước của mảng
            --n;
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    removeAdjacentDuplicates(A);

    for (int num : A) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
