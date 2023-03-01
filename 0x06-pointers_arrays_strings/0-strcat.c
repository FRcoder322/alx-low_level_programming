char *_strcat(char *dest, char *src) {
    // Find the end of the destination string
    char *ptr = dest;
    while (*ptr != '\0') {
        ptr++;
    }
    
    // Append the source string to the destination string
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    
    // Add the terminating null byte
    *ptr = '\0';
    
    // Return a pointer to the destination string
    return dest;
}
