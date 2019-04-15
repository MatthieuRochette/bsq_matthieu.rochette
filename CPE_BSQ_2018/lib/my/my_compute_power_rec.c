/*
** EPITECH PROJECT, 2018
** my_compute_power_rec
** File description:
** test
*/
int my_compute_power_rec(int nb, int p)
{
    long pow = 1;

    if (p > 0) {
        pow = pow * nb;
        p --;
        pow = pow * my_compute_power_rec(nb, p);
    } else if (p < 0) {
        pow = 0;
    } else {
        pow = 1;
    }
    if (pow > 2147483647) {
        pow = 0;
    }
    return (pow);
}