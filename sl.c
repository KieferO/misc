#include <unistd.h>

int main()
{
        write(2, "sl: command not found\n", 23);
        return 127;
}
