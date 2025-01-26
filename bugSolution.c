int main() { 
    int x = 10; 
    int *ptr = &x; 
    if (ptr != NULL) { //Check for null pointer before dereferencing 
        *ptr = 20; 
        int y = *ptr; 
        printf("%d", y); 
    } else { 
        fprintf(stderr, "Error: Null pointer detected\n"); 
        return 1; 
    }
    return 0; 
}