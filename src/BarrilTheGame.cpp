#include <iostream>

int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int N, X;
    std::cin >> N >> X;
    int arr[N];
    for (int i = 0; i < N; i++){
        std::cin >> arr[i];
    }
    for (int i = 0; i < N; i++){
        if (arr[i] == X){
            std::cout << i + 1 << std::endl;
            break;
        }
    }

    return 0;
    
}