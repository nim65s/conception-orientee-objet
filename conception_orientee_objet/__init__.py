from .binary_module import add as binary_add


def add(first: int | str, second: int | str) -> int:
    """Return the integer sum of the 'first' and 'second' arguments.

    Arguments can either be directly integers, or strings. In the latter case,
    they will be casted to integers.
    >>> add(23, 12)
    35
    >>> add("18", "09")
    27
    >>> add(1, "ga")
    Traceback (most recent call last):
    . . .
    ValueError: invalid literal for int() with base 10: 'ga'
    """
    return binary_add(int(first), int(second))
