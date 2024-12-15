/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** copies_n_characters_from_a_string_into_another
*/

char *my_strncpy(char *dest, char const *src, int n);

char *my_strncpy(char *dest, char const *src, int n)
{
    int nb = 0;
    while (nb < n && src[nb] != '\0') {
        dest[nb] = src[nb];
        nb = nb + 1;
        if (nb < n) {
            dest[nb] = '\0';
        }
        return (dest);
    }
}
