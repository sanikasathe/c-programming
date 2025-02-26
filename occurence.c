#include <stdio.h>

int main() {

    int numbers[] = {34, 7, 23, 34, 5, 7, 62, 34};
    int n = sizeof(numbers) / sizeof(numbers[0]); 
    for (int i = 0; i < n; i++) {
        
        int count = 0;
        for (int j = 0; j < i; j++) {
            if (numbers[i] == numbers[j]) {
                count = 1;
                break;
            }
        }

        // Count the occurrences 
        if (count == 0) {
            int occurrence = 0;
            for (int j = 0; j < n; j++) {
                if (numbers[i] == numbers[j]) {
                    occurrence++;
                }
            }
            printf("The number %d occurs %d times.\n", numbers[i], occurrence);
        }
    }

    return 0;
}
