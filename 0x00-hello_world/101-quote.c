#include <unistd.h>

int main(void)
{
    const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19
";
    const int length = sizeof(message) - 1;
    const ssize_t written = write(2, message, length);
    return (written == length) ? 1 : 0;
}
