#include <stdio.h>
#include <stdlib.h>


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b) {
    return a * b / gcd(a, b);
}


int check_gcd(int nums[], int n, int k) {
    int found = 0;
    int new_gcd = 0;  
    for (int i = 0; i < n; i++) {
        if (nums[i] % k == 0) {
            found = 1;
            new_gcd = gcd(new_gcd, nums[i] / k);  
        }
    }
    
    if (!found){
        return 0;
    } 
    
    return new_gcd == 1;  
}


int check_lcm(int nums[], int n, int k) {
   
    int found = 0;
    int new_lcm = 1;  
    for (int i = 0; i < n; i++) {
        if (k % nums[i] == 0) {
            found = 1;
            new_lcm = lcm(new_lcm, nums[i]);
        }
    }
    
    if (!found) {
        return 0;  
    }
    return new_lcm == k;  
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        
        int nums[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }

        
        if (check_gcd(nums, n, k)) {
            printf("Yes ");
        } else {
            printf("No ");
        }

        
        if (check_lcm(nums, n, k)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
