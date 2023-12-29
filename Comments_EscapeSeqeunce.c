  // This is a comment
    /*
        This
        is
        a
        multiline
        comment
    */
    /* escape sequence = character combination consisting of a backslash \ 
                         followed by a letter or combination of digits.
                         They specify actions within a line of text (string)
                         \n = newline
                         \t = tab 
                         \\ = display \
                         \' = display '
                         \" = display "
    */
int main()
{
    /* code */
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n"); // nice yaar ;O
    printf("\"I like Pizza\" -Abraham Lincoln probably");

 // Escape sequences in C
    
    // 1. Alert (bell) \a
    printf("This is an alert: \a\n");
    
    // 2. Backspace \b
    printf("Backspace: before\b after\n");
    
    // 3. Form feed \f
    printf("This is a form feed: \f\n");
    
    // 4. Newline \n
    printf("This is a newline: \n");
    
    // 5. Carriage return \r
    printf("Carriage return: before\r after\n");
    
    // 6. Horizontal tab \t
    printf("This is a tab: \tTabbed\n");
    
    // 7. Vertical tab \v
    printf("This is a vertical tab: \v\n");
    
    // 8. Backslash \\
    printf("This is a backslash: \\\n");
    
    // 9. Single quote \'
    printf("This is a single quote: \'\n");
    
    // 10. Double quote \"
    printf("This is a double quote: \"\n");
    
    // 11. Question mark \?
    printf("This is a question mark: \?\n");
    
    // 12. Null character (terminates strings) \0
    printf("This is a null character: \0\n");
    
    // 13. Octal representation \ooo
    printf("Octal representation: \110\n");
    
    // 14. Hexadecimal representation \xhh
    printf("Hexadecimal representation: \x48\n");

    return 0;
}

    