#!/usr/bin/python3
import sys


def safe_function(fct, *args):
    ret = None
    try:
        ret = fct(*args)
    except Exception as e:
        print("Exception: {}".format(e), file=sys.stderr)
        ret = None
    return (ret)
