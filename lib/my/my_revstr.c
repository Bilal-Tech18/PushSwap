/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** ??
*/

char *my_revstr(char *str)
{
    int word = 0;
    int i = 0;
    int d = 0;
    char tbl;
    char *str2 = str;

    while (str[word] != '\0') {
        word++;
    }
    word--;
    d = word / 2;
    while (word > d) {
        tbl = str[i];
        str2[i] = str[word];
        str2[word] = tbl;
        i++;
        word--;
    }
    return (str);
}
