def safe_print_list(my_list=[], x=0):
    for i in range(x):
        try:
            print(my_list[x])
        except (Exception):
            break
    return (i)
