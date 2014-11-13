

export %(ename)s
proc %(ename)s(%(pars)s) : %(rtype)s {
    %(conversion)s;
    var %(ename)s_return : %(rtype)s;
    sync {
        %(ename)s_return = %(ename)s_internal(%(pars_internal)s);
    }
    return %(ename)s_return;
}

