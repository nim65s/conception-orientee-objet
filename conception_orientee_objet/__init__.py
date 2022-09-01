from .binary_module import add as binary_add


def add(first: int | str, second: int | str) -> int:
    """Return the integer sum of the 'first' and 'second' arguments.

    Arguments can either be directly integers, or strings. In the latter case,
    they will be casted to integers.
    """
    return binary_add(int(first), int(second))
