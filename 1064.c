#include <stdio.h>
#include <string.h>
//错的
int is_palindrome(char *str) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    
    return 1; // It's a palindrome
}

int count_palindrome_insertions(char *A, char *B) {
    int count = 0;
    int n = strlen(A);
    int m = strlen(B);

    for (int i = 0; i <= n; i++) {
        char new_str[105]; // Assuming the combined length won't exceed 100
        int k = 0;
        
        for (int j = 0; j < n; j++) {
            if (j == i) {
                for (int l = 0; l < m; l++) {
                    new_str[k++] = B[l];
                }
            }
            new_str[k++] = A[j];
        }
        
        new_str[k] = '\0';
        
        if (is_palindrome(new_str)) {
            count++;
        }
    }

    return count;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        char A[55], B[55];
        scanf("%s", A);
        scanf("%s", B);
        
        int result = count_palindrome_insertions(A, B);
        printf("%d\n", result);
    }

    return 0;
}
