#include <iostream>
#include <vector>
using namespace std;

int calculateArrayValue(const vector<int>& A, const vector<int>& B) {
    int result = A[0];

    // Duyệt qua mảng B và thực hiện phép cộng hoặc trừ
    for (int i = 0; i < B.size(); ++i) {
        if (B[i] == 1) {
            result += A[i + 1];
        } else {
            result -= A[i + 1];
        }
    }

    return result;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> B(N - 1);

    for (int i = 0; i < N - 1; ++i) {
        cin >> B[i];
    }

    int result = calculateArrayValue(A, B);

    cout << result << endl;

    return 0;
}
