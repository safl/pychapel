
export %(ename)s
proc %(ename)s(%(pars)s) : %(rtype)s {
    %(conversion)s;
    sync {
        %(ename)s_internal(%(args_internal)s);
    }
}

