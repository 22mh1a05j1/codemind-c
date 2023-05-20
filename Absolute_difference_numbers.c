#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int absoluteDifference(int n, int x) {
    // Convert the number N to a string for easy manipulation
    char n_str[20];  // Assuming N will not exceed 20 digits
    sprintf(n_str, "%d", n);
    
    // Extract the first X digits
    int first_x = atoi(strndup(n_str, x));
    
    // Extract the last X digits
    int len = strlen(n_str);
    int last_x = atoi(strndup(n_str + len - x, x));
    
    // Calculate the absolute difference
    int diff = abs(first_x - last_x);
    
    return diff;
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    
    // Calculate and print the absolute difference
    int result = absoluteDifference(n, x);
    printf("%d
", result);
    
    return 0;
}
