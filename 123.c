#include <stdio.h>

//[HINT] remove this include
#define a
#ifndef a
#include "Remove it through the preprocessor for me"
#endif
#define ZERO 0
#define TRASH
#define FUNCTION_CALLED(x) printf("%s\n",x)



void StartCalculate() {
    /*
        [HINT] this should print the function name with a new-line character at the end.
        Use the preprocessor to implement this function.
    */
    FUNCTION_CALLED("StartCalculate");

}

void EndCalculate() {
    /*
        [HINT] this should print the function name with a new-line character at the end.
        Use the preprocessor to implement this function.
    */
    FUNCTION_CALLED(EndCalculate);
}



int knapsack(int n, int w, int weights[], int values[]) {
    // Create a DP table of size (n+1) x (w+1)
    int dp[n + 1][w + 1];

    // Initialize the DP table

    // [HINT] ZERO should be equals 0
    for (int i = ZERO; i <= n; i++) {
        for (int j = ZERO; j <= w; j++) {
            if (i == ZERO || j == ZERO) {
                dp[i][j] = ZERO;
            } else if (weights[i - 1] <= j) {
                // [HINT] The max function should return the larger of the two values. Use the preprocessor to implement this function.
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weights[i - 1]] + values[i - 1]);
            } else {
                // Current item cannot be included in the knapsack
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // Return the maximum price
    return dp[n][w];
}

int main() {
    int n, w;

    // Input the number of items and the capacity of the knapsack
    scanf("%d %d", &n, &w);

    int weights[n], values[n];

    // Input the weight and value of each item
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &weights[i], &values[i]);
    }
    StartCalculate();
    // Calculate the maximum value
    int max_value = knapsack(n, w, weights, values);

    #ifdef TRASH
    // [HINT] try to remove this line
    printf("Remove it through the preprocessor for me");
    #endif

    #define NewPrint(x) printf(#x)
    NewPrint(Total price:); // [HINT] this should be equals to printf("Total price:")
    printf("%d\n", max_value);
    EndCalculate();
    return 0;
}
