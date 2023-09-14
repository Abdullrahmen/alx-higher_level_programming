#!/usr/bin/python3

def uniq_add(my_list=[]):
    uniq_mat = []
    summ = 0
    for i in my_list:
        if i in uniq_mat:
            continue
        uniq_mat.append(i)
        summ += i
    return i
