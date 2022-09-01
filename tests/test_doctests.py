import doctest
import unittest

import conception_orientee_objet


def load_tests(loader, tests, ignore):
    tests.addTests(doctest.DocTestSuite(conception_orientee_objet))
    return tests


if __name__ == "__main__":
    unittest.main()
