#include <stdio.h>

int main() {


    printf("This is a list of EscapeSequences. \nAll of the displayed can be used for a reason, in the same way they are displayed, inside \"\" or \'\'.\n");

    printf("\n");

    printf("\\a\t\t\t=\tstands for an Alert Beep.\n");

    printf("\\b\t\t\t=\tstands for a Backspace character.\t\b\n");

    printf("\\e\t\t\t=\tstands for an Escape character.\n");

    printf("\\f\t\t\t=\tstands for a Formfeed Page Break character.\t\t\f\n");

    printf("\\n and \\r\t=\tboth stand for a line break. The first, is just a new line character. The second represent a carriage return.\t\r");

    printf("\\t\t\t\t=\tstands for a Horizontal Tab character. It will give some spacing in the output. Is usefull for visibility.\r");

    printf("\\v\t\t\t=\tstands for a Vertical Tab character. It will probably just be printed out as a red character.\t\v\n");

    printf("\\\\\t\t\t=\tstands for a backslash character to be printed out.\n");

    printf("\\\' and \\\"\t=\tboth stand for printing out different types of quotation marks when inside itself. Single and double.\n");

    printf("\?\t\t\t=\tstands for a \? symbol. It can be printed out normally, usually, but this way it will avoid trigraphs.\n");

    printf("\\nnn\t\t=\tstands for an Octal number printing. All 'n's can be replaced for an octal number digit.\n");

    printf("\\xhh\t\t=\tstands for an Hexadecimal number printing.\n");

    printf("\\uhhhh\t\t=\tstands for an Unicode code point, which is given with hexadecimal digits, below 10000 in hexadecimal.\n");

    printf("\\Uhhhhhhhh\t=\talso stands for an Unicode code point, but with more digits.\n");

    return 0;
}

/* other escape sequences */