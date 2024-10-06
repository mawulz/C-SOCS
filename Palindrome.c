#include <stdio.h>
#include <string.h>

// function to check if a given string is a palindrome
int isPalindrome(char str[], int start, int end) {
    // base case
    if (start >= end)
        return 1;

    // check if first and last characters match
    if (str[start] != str[end])
        return 0;

    // check for remaining substring recursively
    return isPalindrome(str, start+1, end-1);
}

int main() {
    char str[1001];
    int t;
    
    printf("How many word do you wanna try? ");
    scanf("%d", &t);
    for (int i=0; i< t; i++){
    	printf("%d. word : ", i+1);
	    scanf("%s", str);
	    int n = strlen(str);
	
	    if (isPalindrome(str, 0, n-1))
	        printf("it's a palindrome!\n");
	    else
	        printf("It's not a palindrome!");
	}

    return 0;
}

