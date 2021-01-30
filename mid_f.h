#ifndef MID_F_H_INCLUDED
#define MID_F_H_INCLUDED

#include <iostream>

using namespace std;

void ft_num_print(int value);
int ft_len_num(int value);
int ft_sum_num(int value);
int ft_multi_num(int value);
int ft_abs(int value);
bool check(int a);
double ft_fabs(double value);
double ft_fmin(double value1, double value2);
double ft_fmax(double value1, double value2);
int ft_max(int value1, int value2);
int ft_min(int value1, int value2);
double ft_scir(int radius);
int ft_skv(int value);
int ft_spr(int length, int width);
int ft_sqrt(int value);
bool isfPositive(double num);
bool isPositive(int num);
int power(int num, int exponent);
void name();
void fio();
int chislo(int a);
int ft_max_num(int value);
int ft_min_num(int value);
int ft_rev_num(int value);
int ft_null_count(int value);
bool ft_mirror_num(int value);
int ft_mirror_count(int value);
int ft_second_max(int value);
int ft_second_simple_max_num(int value);
int ft_bin_num(int value);
int ft_oct_num(int value);
int ft_rev_bin_num(int bin);
int ft_rev_oct_num(int oct);
int ft_covert_num(int value, int sys);
int ft_rev_covert_num(int num, int sys);
// str_easy
string ft_hello_str(string name);
int ft_len(string str);
void ft_print_copy_str(string str,int number);
void ft_first_end_three(string str);
int ft_count_char_in_str(char ch,string str);
string ft_even_place(string str);
double ft_percent_lower_uppercase(string str);
string ft_reverse_str(string str);
string ft_slice_str(string str, int start, int end);
bool ft_equal_reverse(string str);
string ft_cmp_str(string str1,string str2,int num);
int ft_find_str(string str1,string str2);
int ft_max_char_on_end(string str);
#endif // MID_F_H_INCLUDED
