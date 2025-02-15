/*[clinic input]
preserve
[clinic start generated code]*/

#if defined(HAVE_SHM_OPEN)

PyDoc_STRVAR(_posixshmem_shm_open__doc__,
"shm_open($module, /, path, flags, mode=511)\n"
"--\n"
"\n"
"Open a shared memory object.  Returns a file descriptor (integer).");

#define _POSIXSHMEM_SHM_OPEN_METHODDEF    \
    {"shm_open", (PyCFunction)(void(*)(void))_posixshmem_shm_open, METH_VARARGS|METH_KEYWORDS, _posixshmem_shm_open__doc__},

static int
_posixshmem_shm_open_impl(PyObject *module, PyObject *path, int flags,
                          int mode);

static PyObject *
_posixshmem_shm_open(PyObject *module, PyObject *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static char *_keywords[] = {"path", "flags", "mode", NULL};
    PyObject *path;
    int flags;
    int mode = 511;
    int _return_value;

    if (!PyArg_ParseTupleAndKeywords(args, kwnames, "Ui|i:shm_open", _keywords, &path, &flags, &mode)) {
        goto exit;
    }
    _return_value = _posixshmem_shm_open_impl(module, path, flags, mode);
    if ((_return_value == -1) && PyErr_Occurred()) {
        goto exit;
    }
    return_value = PyLong_FromLong((long)_return_value);

exit:
    return return_value;
}

#endif /* defined(HAVE_SHM_OPEN) */

#if defined(HAVE_SHM_UNLINK)

PyDoc_STRVAR(_posixshmem_shm_unlink__doc__,
"shm_unlink($module, /, path)\n"
"--\n"
"\n"
"Remove a shared memory object (similar to unlink()).\n"
"\n"
"Remove a shared memory object name, and, once all processes  have  unmapped\n"
"the object, de-allocates and destroys the contents of the associated memory\n"
"region.");

#define _POSIXSHMEM_SHM_UNLINK_METHODDEF    \
    {"shm_unlink", (PyCFunction)(void(*)(void))_posixshmem_shm_unlink, METH_VARARGS|METH_KEYWORDS, _posixshmem_shm_unlink__doc__},

static PyObject *
_posixshmem_shm_unlink_impl(PyObject *module, PyObject *path);

static PyObject *
_posixshmem_shm_unlink(PyObject *module, PyObject *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static char *_keywords[] = {"path", NULL};
    PyObject *path;

    if (!PyArg_ParseTupleAndKeywords(args, kwnames, "U:shm_unlink", _keywords, &path)) {
        goto exit;
    }
    return_value = _posixshmem_shm_unlink_impl(module, path);

exit:
    return return_value;
}

#endif /* defined(HAVE_SHM_UNLINK) */

#ifndef _POSIXSHMEM_SHM_OPEN_METHODDEF
    #define _POSIXSHMEM_SHM_OPEN_METHODDEF
#endif /* !defined(_POSIXSHMEM_SHM_OPEN_METHODDEF) */

#ifndef _POSIXSHMEM_SHM_UNLINK_METHODDEF
    #define _POSIXSHMEM_SHM_UNLINK_METHODDEF
#endif /* !defined(_POSIXSHMEM_SHM_UNLINK_METHODDEF) */
/*[clinic end generated code: output=ff9cf0bc9b8baddf input=a9049054013a1b77]*/
