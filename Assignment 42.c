#include <stdio.h>

int main() {
    int total_cookies, cookies_per_box;
    int boxes_per_container;
    int boxes_required, containers_required;

    // --- Input ---
    // Prompts the user for the three necessary values
    printf("Enter total cookies, cookies/box, boxes/container (e.g., 1800 24 75): ");
    scanf("%d %d %d", &total_cookies, &cookies_per_box, &boxes_per_container);

    // --- 1. Calculate the number of boxes required ---
    // Boxes = ceil(Total Cookies / Cookies per Box)
    // Formula: (Numerator + Denominator - 1) / Denominator
    
    // Check for division by zero
    if (cookies_per_box <= 0) {
        printf("Error: Cookies per box must be greater than 0.\n");
        return 1;
    }
    
    boxes_required = (total_cookies + cookies_per_box - 1) / cookies_per_box;

    // --- 2. Calculate the number of containers required ---
    // Containers = ceil(Total Boxes / Boxes per Container)
    
    // Check for division by zero
    if (boxes_per_container <= 0) {
        printf("Error: Boxes per container must be greater than 0.\n");
        return 1;
    }
    
    containers_required = (boxes_required + boxes_per_container - 1) / boxes_per_container;

    // --- Output ---
    printf("\nBoxes Required: %d\n", boxes_required);
    printf("Containers Required: %d\n", containers_required);

    return 0;
}