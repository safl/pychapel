
proc %(ename)s_nonsynced(%(args)s) : %(rtype)s {
    %(fbody)s
}

export %(ename)s
proc %(ename)s(%(args)s) : %(rtype)s {
    var %(ename)s_return : %(rtype)s;
    sync {
        %(ename)s_return = %(ename)s_nonsynced(%(args)s);
    }
    return %(ename)s_return;
}

